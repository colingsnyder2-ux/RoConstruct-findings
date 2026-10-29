from pathlib import Path
import json,time
from roc import match,rebuild
root=Path('work/g3d-gl-native-20261029');rebuild.size_index('2008-06');results=[]
def analyze(p):
 obj=p.read_bytes();defs=rebuild.coff_externals(obj);out=set()
 for sym,body,rel in match.coff_functions(obj):
  if not defs.get(sym):continue
  hits=rebuild._paired_addresses('2008-06',body,tuple(rel))
  if not hits:continue
  refs=match.coff_data_refs(obj,sym)
  for a in hits:
   target=match.target('2008-06',a)[0]
   if not match.data_check('2008-06',a,target,refs)[1]:out.add((a,sym))
 return out
files=json.loads((root/'shared-provider-files.json').read_text())
for f in files:
 stem=Path(f).stem;old=root/'shared-precise'/(stem+'.obj');new=root/'shared-fast'/(stem+'.obj')
 if stem=='GApp':old=root/'gapp-precise'/(stem+'.obj');new=root/'gapp-fast'/(stem+'.obj')
 if not old.exists() or not new.exists():print('missing',f,flush=True);continue
 a=analyze(old);b=analyze(new);row={'file':f,'old_pairs':len(a),'fast_pairs':len(b),'losses':sorted(a-b),'gains':sorted(b-a)};results.append(row)
 (root/'shared-strict-pairs.json').write_text(json.dumps(results,indent=1));print(f,'losses',len(a-b),'gains',len(b-a),flush=True)
