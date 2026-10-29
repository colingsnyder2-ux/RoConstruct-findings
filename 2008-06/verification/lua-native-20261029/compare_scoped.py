from pathlib import Path
import json
from roc import match,rebuild
root=Path('work/lua-native-20261029');rebuild.size_index('2008-06')
def pairs(p):
 obj=p.read_bytes();out=set()
 for s,b,r in match.coff_functions(obj):
  for a in rebuild._paired_addresses('2008-06',b,tuple(r)):
   if not match.data_check('2008-06',a,match.target('2008-06',a)[0],match.coff_data_refs(obj,s))[1]:out.add((a,s))
 return out
a=pairs(Path('rebuild/2008-06/out/Lua/layer-upstream/lmathlib.obj'));b=pairs(root/'scoped/lmathlib.obj');r={'losses':sorted(a-b),'gains':sorted(b-a),'old_pairs':len(a),'new_pairs':len(b)};(root/'scoped-pairs.json').write_text(json.dumps(r,indent=1));print(json.dumps(r,indent=1))
