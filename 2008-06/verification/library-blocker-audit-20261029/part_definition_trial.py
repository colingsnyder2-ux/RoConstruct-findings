"""Test one missing-definition hypothesis for both rejected descriptor families."""
import importlib.util
import json
from pathlib import Path
from roc import libs, match

spec = importlib.util.spec_from_file_location('swap_build', 'rebuild/2008-06/swap_build.py')
swap = importlib.util.module_from_spec(spec)
spec.loader.exec_module(swap)
report = json.loads(Path('rebuild/2008-06/out/RbxgsApp/swap-results.json').read_text())
results = []
for n, name in enumerate(['roc_unit_37dc9d259436df0a.cpp', 'roc_unit_4349f38f33416276.cpp']):
    group = next(g for g in report['groups'] if g['file'] == name)
    source = (swap.TREES['RbxgsApp'] / name).read_text()
    source = '#include "v8datamodel/PartInstance.h"\n' + source
    unit = libs.add_unit('rbxgs-dll', source, prefix='roc_native_part_definition_')
    group = dict(group, file=unit)
    result = {'original': name, 'unit': unit, 'targets': group['addrs']}
    try:
        obj = swap.compile_against_overlay('RbxgsApp', group, 9100 + n)
        (Path(__file__).parent / (unit + '.obj')).write_bytes(obj)
        text = libs.source_for('rbxgs-dll', unit, 'cpp', 21022, group['flags'])
        rows = []
        for address in group['addrs']:
            score, symbol, reason, _ = match.check_text('2008-06', address, text, obj=obj, minimum=99)
            rows.append({'address': address, 'score': score, 'symbol': symbol, 'reason': str(reason)[:1200]})
        result.update(compiled=True, rows=rows)
    except Exception as error:
        result.update(compiled=False, error=str(error))
    results.append(result)
    print(json.dumps(result)[:10000], flush=True)
    (Path(__file__).parent / 'part-definition-proof.json').write_text(json.dumps(results, indent=1))
