"""Verify corrected bindings against selected linker owners and target callees."""
import json
import re
from pathlib import Path
from roc import match

root = Path(__file__).parent
rows = json.loads(Path('work/shared-pool-audit-20261029/constructor-twin-candidates.json').read_text())
proof = []
for row in rows:
    if len(row['qualified_candidates']) != 1:
        continue
    module = row['module']
    address = row['qualified_candidates'][0]
    out = Path('rebuild/2008-06/out') / module
    report = json.loads((out / 'report.json').read_text())
    assert report['linked'] and report['test_exit'] == 0, module
    test = 'rbx_app' if module == 'RbxApp' else 'xtp_colors'
    selected = {}
    for line in Path('rebuild/2008-06/out/tests', test, test + '.map').read_text().splitlines():
        fields = line.split()
        if len(fields) >= 4 and re.fullmatch('[0-9a-fA-F]{4}:[0-9a-fA-F]{8}', fields[0]):
            selected[fields[1]] = line.strip()
    symbol = row['symbol']
    line = selected[symbol]
    owner = re.search(r'linked:([^ ]+\.obj)', line)
    assert owner, line
    obj = (out / 'linked' / owner[1]).read_bytes()
    body, relocs = next((b, r) for s, b, r in match.coff_functions(obj) if s == symbol)
    target, target_relocs, _ = match.target('2008-06', address)
    assert len(body) == len(target) and match.exact_match(target, target_relocs, body, relocs)
    assert not match.data_check('2008-06', address, target, match.coff_data_refs(obj, symbol))[1]
    bindings = {}
    for entry in json.loads((out / 'verified/swaps.json').read_text())['swaps']:
        for name, value in entry['keep'].items():
            bindings.setdefault(name, value)
    assert bindings[symbol] == address, (symbol, bindings[symbol], address)
    evidence = next(c for c in row['candidates'] if c['address'] == address)
    assert evidence['observed_root_types'] == [row['expected_type']]
    proof.append(dict(module=module, symbol=symbol, retired_address=row['address'], address=address,
                      expected_type=row['expected_type'], original_callee=evidence['original_callee'],
                      code_exact=True, data_exact=True, map_line=line, linked=True, runtime_exit=0))
(root / 'proof.json').write_text(json.dumps(proof, indent=1) + '\n')
print('Verified corrected constructor bindings:', len(proof))
