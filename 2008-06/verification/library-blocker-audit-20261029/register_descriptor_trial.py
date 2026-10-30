import json
import shutil
from pathlib import Path

root = Path(__file__).parent
module_path = Path('rebuild/2008-06/modules/rbxgs-app.json')
for source, target in [(module_path, root / 'baseline-rbxgs-spec.json'),
                       (Path('rebuild/2008-06/out/RbxgsApp/report.json'), root / 'baseline-rbxgs-report.json'),
                       (Path('rebuild/2008-06/out/RbxgsApp/force/force_verified.h'), root / 'baseline-rbxgs-force.h'),
                       (Path('rebuild/2008-06/out/RbxgsApp/verified/swaps.json'), root / 'baseline-rbxgs-swaps.json')]:
    if not target.exists():
        shutil.copyfile(source, target)
rows = json.loads((root / 'part-definition-placement.json').read_text())
qualified = [r for r in rows if len(r['data_qualified_addresses']) == 1]
assert len(qualified) == 7 and len({r['unit'] for r in qualified}) == 1
unit = qualified[0]['unit']
symbols = {r['data_qualified_addresses'][0]: r['symbol'] for r in qualified}
module = json.loads(module_path.read_text())
entries = module.setdefault('native_units', [])
assert not any(e['file'] == unit for e in entries)
entries.append({'recipe': 'rbxgs-dll', 'file': unit, 'cl': '21022',
                'flags': '/O2 /Ob2 /Oy /GF /GS- /EHsc /MD', 'addrs': list(symbols), 'symbols': symbols,
                'provenance': 'Existing real Humanoid reflection globals with missing PartInstance definition included. Replay removes private aliases and uses adopted module headers. Each constructor is uniquely placed by its property name/category data among eight code-identical candidates. Rocket generic constructor remains unbound: sixteen ambiguous candidates.'})
module_path.write_text(json.dumps(module, indent=1) + '\n')
print('Registered seven data-disambiguated reflection constructors; full forced link/runtime still required.')
