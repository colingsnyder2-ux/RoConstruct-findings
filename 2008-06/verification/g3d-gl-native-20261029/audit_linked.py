from pathlib import Path
import json,re
from roc import match,rebuild
root=Path('work/g3d-gl-native-20261029');out=Path('rebuild/2008-06/out/G3D-GL');report=json.loads((out/'report.json').read_text());old=json.loads((root/'baseline-report.json').read_text());new=set(report['owned_addrs'])-set(old['owned_addrs']);maps=Path('rebuild/2008-06/out/tests/g3d_gl/g3d_gl.map').read_text().splitlines();selected={line.split()[1]:line.strip() for line in maps if len(line.split())>=3 and re.match(r'^\s+[0-9a-fA-F]{4}:',line)}
proof=[]
for p in (out/'linked').glob('*.obj'):
 obj=p.read_bytes()
 for sym,body,rel in match.coff_functions(obj):
  line=selected.get(sym,'')
  if not line or ('linked:'+p.name).lower() not in line.lower():continue
  for a in new:
   target,trel,_=match.target('2008-06',a)
   if len(body)!=len(target) or not match.exact_match(target,trel,body,rel):continue
   bad=match.data_check('2008-06',int(a,16),target,match.coff_data_refs(obj,sym))[1]
   proof.append({'address':a,'symbol':sym,'object':p.name,'map_line':line,'data_exact':not bad,'bad':bad})
(root/'shared-linked-gains.json').write_text(json.dumps(proof,indent=1));good={r['address'] for r in proof if r['data_exact']};print('raw_new',len(new),'strict_actual_linked',len(good),'addresses',sorted(good))
roots=json.loads((root/'forced-root-proof.json').read_text());checked=[]
for r in roots:
 sym=r['symbol'];a=r['address'];line=selected.get(sym,'');m=re.search(r'linked:([^ ]+\.obj)',line,re.I)
 assert m,(sym,line)
 obj=(out/'linked'/m[1]).read_bytes();matches=[(b,rel) for s,b,rel in match.coff_functions(obj) if s==sym];assert matches,sym
 b,rel=matches[0];target,trel,_=match.target('2008-06',a);code=len(b)==len(target) and match.exact_match(target,trel,b,rel);bad=match.data_check('2008-06',int(a,16),target,match.coff_data_refs(obj,sym))[1];assert code and not bad,(sym,a,bad)
 checked.append({'symbol':sym,'address':a,'map_line':line,'code_exact':code,'data_exact':not bad})
(root/'shared-forced-root-proof.json').write_text(json.dumps(checked,indent=1));print('forced_roots_preserved',len(checked));assert set(old['owned_addrs'])<=set(report['owned_addrs'])
