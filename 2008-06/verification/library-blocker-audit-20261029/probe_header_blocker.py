import importlib.util
import json
from pathlib import Path

spec = importlib.util.spec_from_file_location('swap_build', 'rebuild/2008-06/swap_build.py')
swap = importlib.util.module_from_spec(spec)
spec.loader.exec_module(swap)
report = json.loads(Path('rebuild/2008-06/out/RbxgsApp/swap-results.json').read_text())
names = ['roc_unit_37dc9d259436df0a.cpp', 'roc_unit_4349f38f33416276.cpp']
for n, name in enumerate(names):
    group = next(g for g in report['groups'] if g['file'] == name)
    try:
        obj = swap.compile_against_overlay('RbxgsApp', group, 9000 + n)
        result = {'file': name, 'compiled': True, 'bytes': len(obj)}
    except Exception as error:
        result = {'file': name, 'compiled': False, 'error': str(error)}
    Path(__file__).with_name(name + '.errors.json').write_text(json.dumps(result, indent=1))
    print(json.dumps(result)[:10000], flush=True)
