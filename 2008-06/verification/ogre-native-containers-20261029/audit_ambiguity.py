from pathlib import Path
import json
from roc import match,rebuild
root=Path('work/ogre-native-containers-20261029');rebuild.size_index('2008-06');obj=(root/'winning.obj').read_bytes();funcs={s:(b,r) for s,b,r in match.coff_functions(obj)};rows=[]
for c in json.loads((root/'selected-candidates.json').read_text()):
 b,r=funcs[c['symbol']];refs=match.coff_data_refs(obj,c['symbol']);fits=[a for a in rebuild._paired_addresses('2008-06',b,tuple(r)) if not match.data_check('2008-06',a,match.target('2008-06',a)[0],refs)[1]];rows.append(dict(c,global_data_exact_addresses=fits,globally_unique=len(fits)==1));print(c['address'],'global fits',len(fits),flush=True)
(root/'global-ambiguity.json').write_text(json.dumps(rows,indent=1));print('globally unique',sum(r['globally_unique'] for r in rows),'/',len(rows),flush=True)
