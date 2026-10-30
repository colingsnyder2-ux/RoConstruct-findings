"""Snapshot the passing candidate and prove gains against the same-policy baseline."""
import json
import shutil
from pathlib import Path
from roc import match, rebuild

root = Path(__file__).parent
out = Path('rebuild/2008-06/out/RbxgsApp')
candidate = json.loads((out/'report.json').read_text())
baseline = json.loads((root/'baseline-report.json').read_text())
assert all(r['linked'] and r['test_exit'] == 0 for r in (baseline,candidate))
before, after = set(baseline['owned_addrs']), set(candidate['owned_addrs'])
gained, lost = after-before, before-after
assert not lost, sorted(lost)
shutil.copyfile(out/'report.json',root/'candidate-report.json')
shutil.copyfile(root/'full-build.log',root/'candidate-build.log')
snapshot=root/'candidate-linked'
assert not snapshot.exists()
snapshot.mkdir()
for obj in (out/'linked').glob('*.obj'):
    shutil.copyfile(obj,snapshot/obj.name)
comparison=dict(baseline_count=len(before),candidate_count=len(after),gained=sorted(gained),lost=sorted(lost),
                same_ownership_policy=True,server_accepted=False)
(root/'comparison.json').write_text(json.dumps(comparison,indent=1))
print('Same-policy gains',len(gained),'lost',len(lost),flush=True)
sizes={match._functions('2008-06')[a]['size'] for a in gained}
witnesses={}
for path in sorted(snapshot.glob('*.obj')):
    obj=path.read_bytes()
    symbols={s for s,b,r in match.coff_functions(obj) if len(b) in sizes}
    if not symbols:
        continue
    for symbol,size,hits in rebuild.pair_object('2008-06',obj,symbols):
        if len(hits)!=1 or hits[0] not in gained or hits[0] in witnesses:
            continue
        refs=match.coff_data_refs(obj,symbol)
        witnesses[hits[0]]=dict(address=hits[0],object=path.name,symbol=symbol,
                               data_refs=[dict(offset=o,text=d[:60].decode('ascii','replace'),masked=m) for o,d,m in refs])
assert set(witnesses)==gained
(root/'gain-witnesses.json').write_text(json.dumps(witnesses,indent=1))
print('Proved exact source witnesses',len(witnesses),flush=True)
