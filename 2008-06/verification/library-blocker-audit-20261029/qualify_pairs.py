import json
from pathlib import Path
from roc import match

root = Path(__file__).parent
proof = json.loads((root / 'part-definition-proof.json').read_text())
pairs = json.loads((root / 'part-definition-pairs.json').read_text())
rows = []
for group, paired in zip(proof, pairs):
    obj = (root / (group['unit'] + '.obj')).read_bytes()
    for pair in paired['pairs']:
        refs = match.coff_data_refs(obj, pair['symbol'])
        qualified = []
        for address in pair['hits']:
            target, _, _ = match.target('2008-06', address)
            if not match.data_check('2008-06', address, target, refs)[1]:
                qualified.append(address)
        rows.append({'unit': group['unit'], 'symbol': pair['symbol'], 'code_candidates': pair['hits'],
                     'data_qualified_addresses': qualified, 'data_references': len(refs)})
(root / 'part-definition-placement.json').write_text(json.dumps(rows, indent=1))
print(json.dumps(rows, indent=1))
