"""Discover candidates from matching source/target vtable slots; grants no ownership."""
import collections
import json
import re
import struct
from pathlib import Path

import pefile
from roc import match

root = Path.cwd()
out = root / 'rebuild/2008-06/out'
tables = json.loads((root / 'work/2008-06/vtables.json').read_text())
by_class = collections.defaultdict(list)
for table in tables:
    by_class[table['class']].append(table)
owned = set()
for report in out.glob('*/report.json'):
    data = json.loads(report.read_text())
    if data.get('linked') and data.get('test_exit') == 0:
        owned.update(data.get('owned_addrs', []))
pe = pefile.PE(str(root / 'clients/2008-06/Roblox.exe'))
image = pe.get_memory_mapped_image()
base = pe.OPTIONAL_HEADER.ImageBase
results = []
for module, test in [('RbxgsApp', 'rbxgs_app'), ('XTP', 'xtp_colors')]:
    # Use actual configured test name, rather than assuming a fixture name.
    spec = next(json.loads(p.read_text()) for p in
                (root / 'rebuild/2008-06/modules').glob('*.json')
                if json.loads(p.read_text()).get('name') == module)
    test = spec['test']
    mapping = out / 'tests' / test / (test + '.map')
    if not mapping.exists():
        print(module, 'missing test map', flush=True)
        continue
    linked = set()
    for line in mapping.read_text().splitlines():
        words = line.split()
        if len(words) >= 5 and words[3] == 'f' and words[-1].startswith('linked:'):
            linked.add((words[1], words[-1][7:]))
    for obj in sorted((out / module / 'linked').glob('*.obj')):
        data = obj.read_bytes()
        sections, symbols, _, _ = match._coff_data_index(data)
        functions = {name: (body, relocs) for name, body, relocs in match.coff_functions(data)}
        for name, value, section, _ in symbols.values():
            # Handle simple MSVC class names only. Multiple-inheritance tables
            # can differ in slot layout and are intentionally excluded.
            m = re.fullmatch(r'\?\?_7([A-Za-z_][\w@]*)@@6B@', name)
            if not m or section <= 0:
                continue
            class_name = '::'.join(reversed(m.group(1).split('@')))
            if class_name not in by_class:
                continue
            s = sections[section - 1]
            for n in range(s[7]):
                offset, sym_index, kind = struct.unpack_from('<IIH', data, s[5] + 10*n)
                if kind != 6 or offset < value or (offset - value) % 4 or sym_index not in symbols:
                    continue
                slot = (offset-value)//4
                symbol = symbols[sym_index][0]
                if symbol not in functions or (symbol, obj.name) not in linked:
                    continue
                if struct.unpack_from('<I', data, s[4] + offset)[0] != 0:
                    continue
                body, relocs = functions[symbol]
                for table in by_class[class_name]:
                    if slot >= len(table['slots']):
                        continue
                    target = table['slots'][slot][0].lower()
                    if target in owned:
                        continue
                    pointer = int(table['vtable'], 16) + 4*slot - base
                    if pointer < 0 or pointer + 4 > len(image) or struct.unpack_from('<I', image, pointer)[0] != int(target, 16):
                        continue
                    try:
                        code, target_relocs, _ = match.target('2008-06', target)
                        if not match.exact_match(code, target_relocs, body, relocs):
                            continue
                        refs = match.coff_data_refs(data, symbol)
                        checked, bad = match.data_check('2008-06', target, code, refs)
                        if bad or len(checked) != len(refs):
                            continue
                    except (KeyError, ValueError):
                        continue
                    results.append(dict(module=module, object=obj.name, symbol=symbol,
                                        class_name=class_name, vtable=table['vtable'],
                                        slot=slot, target=target, size=len(body),
                                        relocations=len(relocs), data_refs=len(refs)))
    print(module, 'rows', sum(r['module'] == module for r in results), flush=True)
path = root / 'work/native-vtable-sweep-20261030.json'
path.write_text(json.dumps(results, indent=2) + '\n')
print('distinct targets', len({r['target'] for r in results}), flush=True)
