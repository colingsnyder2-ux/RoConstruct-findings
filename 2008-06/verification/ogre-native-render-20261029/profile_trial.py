from pathlib import Path
import json
from roc import libs,match
p=Path('work/ogre-native-render-20261029');s=(p/'unit.cpp').read_text();variants=[('precise','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD',s),('vector-precise','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast',s.replace('#include <Ogre.h>','#pragma float_control(precise, on, push)\n#include <OgreVector3.h>\n#pragma float_control(pop)\n#include <Ogre.h>',1))];bindings={r['address']:r['symbol'] for r in json.loads((p/'proof.json').read_text())};results=[]
for name,flags,text in variants:
 u=libs.add_unit('ogre-1.4.5-dll',text,prefix='roc_native_scene_render_');o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,flags));(p/(name+'.obj')).write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};rows=[]
 for a,sym in bindings.items():
  b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];row={'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'size':len(b),'target_size':len(t)};rows.append(row)
 print(name,'exact',sum(r['code_exact'] and r['data_exact'] for r in rows),'/',len(rows),'bad',[(r['address'],r['size'],r['target_size']) for r in rows if not r['code_exact'] or not r['data_exact']],flush=True);results.append({'variant':name,'file':u,'flags':flags,'rows':rows})
(p/'profile-trials.json').write_text(json.dumps(results,indent=1))
