import json
import re
from pathlib import Path
from roc import match

root = Path(__file__).parent
out = Path('rebuild/2008-06/out/RbxApp')
def forced(path):
    return {line.split('/INCLUDE:', 1)[1][:-2] for line in path.read_text().splitlines()}
old = forced(root / 'baseline-force.h')
current = forced(out / 'force/force_verified.h')
assert old <= current, sorted(old - current)
manifest = json.loads((out / 'verified/swaps.json').read_text())
bindings = {}
for entry in manifest['swaps']:
    for symbol, address in entry['keep'].items():
        bindings.setdefault(symbol, address)
mapping = {}
for line in Path('rebuild/2008-06/out/tests/rbx_app/rbx_app.map').read_text().splitlines():
    fields = line.split()
    if len(fields) >= 4 and re.fullmatch('[0-9a-fA-F]{4}:[0-9a-fA-F]{8}', fields[0]):
        mapping[fields[1]] = line.strip()
objects = {}
rows = []
for symbol in sorted(current):
    line = mapping.get(symbol, '')
    owner = re.search(r'linked:([^ ]+\.obj)', line)
    assert owner, (symbol, line)
    path = out / 'linked' / owner[1]
    if path not in objects:
        obj = path.read_bytes()
        objects[path] = obj, {s: (b, r) for s, b, r in match.coff_functions(obj)}
    obj, functions = objects[path]
    body, relocs = functions[symbol]
    address = bindings[symbol]
    target, target_relocs, _ = match.target('2008-06', address)
    assert len(body) == len(target) and match.exact_match(target, target_relocs, body, relocs)
    assert not match.data_check('2008-06', address, target, match.coff_data_refs(obj, symbol))[1]
    rows.append({'address': address, 'symbol': symbol, 'size': len(body), 'map_line': line,
                 'code_exact': True, 'data_exact': True, 'new_forced_root': symbol not in old})
(root / 'forced-root-proof.json').write_text(json.dumps(rows, indent=1))
print('Forced', len(rows), 'prior preserved', len(old), 'new', [(r['address'], r['symbol']) for r in rows if r['new_forced_root']], flush=True)
