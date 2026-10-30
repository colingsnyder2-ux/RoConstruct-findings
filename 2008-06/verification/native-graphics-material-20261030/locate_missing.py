"""Locate missing callees through calls in code/data-qualified owned callers."""
import json
import struct
from collections import defaultdict
from pathlib import Path
from roc import match

root = Path(__file__).parent
missing = set(json.loads((root / 'effect-cache-force-result.json').read_text())['unresolved'])
owners = json.loads((root / 'effect-cache-owned-symbols.json').read_text())
owned = defaultdict(set)
for address, rows in owners.items():
    for row in rows:
        owned[row['object'], row['symbol']].add(address)
found = defaultdict(list)
for path in sorted(Path('rebuild/2008-06/out/RbxgsApp/linked').glob('*.obj')):
    data = path.read_bytes()
    sections, symbols, locations, _ = match._coff_data_index(data)
    if not missing.intersection(name for name, *_ in symbols.values()):
        continue
    for name, body, _ in match.coff_functions(data):
        addresses = owned.get((path.name, name), set())
        if len(addresses) != 1:
            continue
        address = next(iter(addresses))
        target, _, _ = match.target('2008-06', address)
        value, section = locations[name]
        header = sections[section]
        for n in range(header[7]):
            at, ref, kind = struct.unpack_from('<IIH', data, header[5] + n * 10)
            offset = at - value
            callee = symbols[ref][0]
            if (callee not in missing or kind != 20 or not 1 <= offset <= len(body)-4
                    or body[offset-1] not in (0xe8, 0xe9)
                    or struct.unpack_from('<i', body, offset)[0]):
                continue
            destination = int(address, 16) + offset + 4 + struct.unpack_from('<i', target, offset)[0]
            found[callee].append(dict(object=path.name, caller=name, address=address,
                relocation_offset=offset, target=f'{destination:08x}'))
result = {symbol: dict(targets=sorted({row['target'] for row in found[symbol]}), callers=found[symbol])
          for symbol in sorted(missing)}
(root / 'missing-callee-sites.json').write_text(json.dumps(result, indent=1))
for symbol, row in result.items():
    print(symbol[:100], row['targets'], len(row['callers']))
