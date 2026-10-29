from pathlib import Path
import json
from roc import match,rebuild
root=Path('work/lua-native-20261029');rebuild.size_index('2008-06');rows=[]
def pairs(p):
 obj=p.read_bytes();out=set()
 for s,b,r in match.coff_functions(obj):
  for a in rebuild._paired_addresses('2008-06',b,tuple(r)):
   if not match.data_check('2008-06',a,match.target('2008-06',a)[0],match.coff_data_refs(obj,s))[1]:out.add((a,s))
 return out
for p in sorted((root/'fast').glob('*.obj')):
 a=pairs(Path('rebuild/2008-06/out/Lua/layer-upstream')/p.name);b=pairs(p);row={'file':p.stem+'.c','old_pairs':len(a),'fast_pairs':len(b),'losses':sorted(a-b),'gains':sorted(b-a)};rows.append(row)
 if a!=b:print(row['file'],'losses',len(a-b),'gains',len(b-a),flush=True)
(root/'strict-profile-pairs.json').write_text(json.dumps(rows,indent=1));print('safe winning files',[r['file'] for r in rows if r['gains'] and not r['losses']],flush=True)
