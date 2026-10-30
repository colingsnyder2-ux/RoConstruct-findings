"""Separate inventory additions from code/data-exact functions selected by the test linker."""
import collections
import json
import re
from pathlib import Path
from roc import match, rebuild

root = Path(__file__).parent
out = Path('rebuild/2008-06/out/RbxApp')
before = json.loads((root / 'baseline-report.json').read_text())
after = json.loads((out / 'report.json').read_text())
new = set(after['owned_addrs']) - set(before['owned_addrs'])
assert not set(before['owned_addrs']) - set(after['owned_addrs'])
selected = {}
for line in Path('rebuild/2008-06/out/tests/rbx_app/rbx_app.map').read_text().splitlines():
    fields = line.split()
    if len(fields) >= 4 and re.fullmatch('[0-9a-fA-F]{4}:[0-9a-fA-F]{8}', fields[0]):
        selected[fields[1]] = line.strip()
rows = []
for path in sorted((out / 'linked').glob('*.obj')):
    obj = path.read_bytes()
    functions = {s: (b, r) for s, b, r in match.coff_functions(obj)}
    for symbol, size, hits in rebuild.pair('2008-06', [(s, b, r) for s, (b, r) in functions.items()]):
        if len(hits) != 1 or hits[0] not in new:
            continue
        address = hits[0]
        target, _, _ = match.target('2008-06', address)
        ok, bad = match.data_check('2008-06', address, target, match.coff_data_refs(obj, symbol))
        line = selected.get(symbol, '')
        owner = re.search(r'linked:([^ ]+\.obj)', line)
        rows.append({'address': address, 'symbol': symbol, 'size': size, 'object': path.name,
                     'data_exact': not bad, 'data_checks': ok, 'data_failures': bad,
                     'selected_map_owner': bool(owner and owner[1] == path.name), 'map_line': line})
(root / 'new-inventory-proof.json').write_text(json.dumps(rows, indent=1))
linked = {r['address'] for r in rows if r['data_exact'] and r['selected_map_owner']}
summary = {'inventory_before': before['owned_2008'], 'inventory_after': after['owned_2008'],
           'new_inventory_addresses': len(new), 'all_prior_inventory_addresses_preserved': True,
           'new_code_data_map_addresses': sorted(linked), 'new_code_data_map_count': len(linked),
           'prior_forced_roots': len((root / 'baseline-force.h').read_text().splitlines()),
           'forced_verified_roots': len((out / 'force/force_verified.h').read_text().splitlines()),
           'linked': after['linked'], 'runtime_exit': after['test_exit'],
           'server_credits_claimed': 0,
           'scope': 'Source access compatibility changes no fields, bases or virtual slots. No claim of complete native class layout or original access spelling.'}
(root / 'summary.json').write_text(json.dumps(summary, indent=1))
print(json.dumps(summary, indent=1), flush=True)
