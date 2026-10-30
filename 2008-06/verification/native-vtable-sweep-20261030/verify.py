"""Verify raw code and executable bytes for unrelocated vtable candidates."""
import json
import struct
from pathlib import Path

import pefile
from roc import match

root = Path.cwd()
out = root / 'rebuild/2008-06/out'
rows = json.loads((root / 'work/native-vtable-sweep-20261030.json').read_text())
specs = {x['name']: x for x in (json.loads(p.read_text()) for p in
         (root / 'rebuild/2008-06/modules').glob('*.json'))}
results = []
for module in sorted({r['module'] for r in rows}):
    test = specs[module]['test']
    directory = out / 'tests' / test
    pe = pefile.PE(str(directory / (test + '.exe')))
    image, base = pe.get_memory_mapped_image(), pe.OPTIONAL_HEADER.ImageBase
    addresses = {}
    for line in (directory / (test + '.map')).read_text().splitlines():
        words = line.split()
        if len(words) >= 4 and words[-1].startswith('linked:'):
            try:
                addresses.setdefault((words[1], words[-1][7:]), set()).add(int(words[2], 16))
            except ValueError:
                continue
    for row in (r for r in rows if r['module'] == module and r['relocations'] == 0):
        obj = (out / module / 'linked' / row['object']).read_bytes()
        bodies = [body for name, body, relocs in match.coff_functions(obj)
                  if name == row['symbol'] and not relocs and len(body) == row['size']]
        target, _, _ = match.target('2008-06', row['target'])
        candidates = addresses.get((row['symbol'], row['object']), set())
        proved = [addr for addr in candidates if 0 <= addr-base <= len(image)-len(target)
                  and image[addr-base:addr-base+len(target)] == target]
        source_tables = addresses.get((row['source_vtable'], row['object']), set())
        linked_slots = []
        for table in source_tables:
            pointer = table - base + 4 * row['slot']
            if 0 <= pointer <= len(image)-4:
                callee = struct.unpack_from('<I', image, pointer)[0]
                if callee in proved:
                    linked_slots.append(table)
        if target in bodies and proved and linked_slots:
            results.append(dict(row, executable_addresses=['%08x' % a for a in sorted(proved)],
                                executable_vtables=['%08x' % a for a in sorted(linked_slots)]))
path = root / 'work/native-vtable-unrelocated-20261030.json'
path.write_text(json.dumps(results, indent=2) + '\n')
print('Rows:', len(results), 'distinct target addresses:', len({r['target'] for r in results}))
