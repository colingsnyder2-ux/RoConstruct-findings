from pathlib import Path
import json
from roc import match
root=Path('work/ogre-native-accessors-20261029');targets=['006850b0','006850f0','00685820','00685830','006857e0','00685660','00685910','00685700','00685170','006851a0'];rows=[]
for profile in ['precise','fast']:
 p=root/(profile+'.obj')
 if not p.exists():continue
 obj=p.read_bytes();matches=[]
 for sym,b,r in match.coff_functions(obj):
  for a in targets:
   target,rel,_=match.target('2008-06',a)
   if len(b)==len(target) and match.exact_match(target,rel,b,r):
    bad=match.data_check('2008-06',a,target,match.coff_data_refs(obj,sym))[1];matches.append({'address':a,'symbol':sym,'code_exact':True,'data_exact':not bad,'bad':bad,'size':len(b)})
 rows.append({'profile':profile,'matches':matches});print(profile,[(m['address'],m['symbol'],m['data_exact']) for m in matches],flush=True)
(root/'exact-proof.json').write_text(json.dumps(rows,indent=1))
