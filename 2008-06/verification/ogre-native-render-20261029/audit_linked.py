from pathlib import Path
import json,re
from roc import match
root=Path('work/ogre-native-render-20261029');out=Path('rebuild/2008-06/out/Ogre');manifest=json.loads((out/'verified/swaps.json').read_text());bindings={}
for entry in manifest['swaps']:
 for sym,a in entry['keep'].items():bindings.setdefault(sym,a)
forced=re.findall(r'/INCLUDE:([^"\n]+)',(out/'force/force_verified.h').read_text());lines=Path('rebuild/2008-06/out/tests/ogre_link/ogre_link.map').read_text().splitlines();selected={l.split()[1]:l.strip() for l in lines if re.match(r'^\s+[0-9a-fA-F]{4}:',l) and len(l.split())>2};objects={};rows=[]
for sym in forced:
 a=bindings[sym];line=selected.get(sym,'');owner=re.search(r'linked:([^ ]+\.obj)',line);assert owner,(sym,line);p=out/'linked'/owner[1]
 if p not in objects:
  obj=p.read_bytes();objects[p]=(obj,{s:(b,r) for s,b,r in match.coff_functions(obj)})
 obj,funcs=objects[p];b,r=funcs[sym];target,tr,_=match.target('2008-06',a);code=len(b)==len(target) and match.exact_match(target,tr,b,r);bad=match.data_check('2008-06',a,target,match.coff_data_refs(obj,sym))[1];assert code and not bad,(sym,a,bad);rows.append({'symbol':sym,'address':a,'map_line':line,'code_exact':code,'data_exact':not bad})
oldmanifest=json.loads((root/'baseline-swaps.json').read_text());oldbindings={};[oldbindings.setdefault(s,a) for e in oldmanifest['swaps'] for s,a in e['keep'].items()];old=re.findall(r'/INCLUDE:([^\"\n]+)',(root/'baseline-force.h').read_text());oldaddrs={oldbindings[s] for s in old};addrs={r['address'] for r in rows};assert oldaddrs<=addrs,sorted(oldaddrs-addrs)
(root/'full-forced-root-proof.json').write_text(json.dumps(rows,indent=1));print('roots',len(rows),'old preserved',len(old),'new addresses',sorted(addrs-oldaddrs),flush=True)
