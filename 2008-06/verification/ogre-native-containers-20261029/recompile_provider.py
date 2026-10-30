from pathlib import Path
import json
from roc import libs,match
root=Path('work/ogre-native-containers-20261029');swaps=json.loads(Path('rebuild/2008-06/out/Ogre/verified/swaps.json').read_text())['swaps'];entry=next(e for e in swaps if e['obj'].endswith('0134.obj'));p=Path('research/recipes.json');recipes=json.loads(p.read_text());recipes['ogre-native-containers-20261029']['provider_hypothesis']='Observed access violation at old VC2005 map insert helper selected from Ogre1.6.4 TU; it reads head at+4 while genuine VC2008 cohort uses+24. Recompile that producer TU under21022 and preserve both existing roots before changing helper ownership; no blanket flag-only swap across layouts.';p.write_text(json.dumps(recipes,indent=2)+'\n');obj=match.compile_text('2008-06',libs.source_for(entry['recipe'],entry['file'],'cpp',21022,entry['flags']));(root/'provider-21022.obj').write_bytes(obj);funcs={s:(b,r) for s,b,r in match.coff_functions(obj)};rows=[]
for sym,a in entry['keep'].items():
 if sym not in funcs:rows.append({'symbol':sym,'address':a,'present':False});continue
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);code=len(b)==len(t) and match.exact_match(t,tr,b,r);bad=match.data_check('2008-06',a,t,match.coff_data_refs(obj,sym))[1];rows.append({'symbol':sym,'address':a,'present':True,'code_exact':code,'data_exact':not bad,'size':len(b),'expected_size':len(t),'bad':bad})
(root/'provider-21022-proof.json').write_text(json.dumps({'source':entry,'checks':rows},indent=1));print([(r['address'],r.get('code_exact'),r.get('data_exact'),r.get('size')) for r in rows],flush=True)
