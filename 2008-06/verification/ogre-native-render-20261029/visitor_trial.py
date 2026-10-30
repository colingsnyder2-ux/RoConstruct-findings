from pathlib import Path
import json,re
from roc import libs,match
p=Path('work/ogre-native-render-20261029');s=(p/'frame-unit.cpp').read_text();s=s.replace('    void initRenderQueue();','    void renderObjects(const QueuedRenderableCollection& objects, QueuedRenderableCollection::OrganisationMode mode, bool doLightIteration, const LightList* manualLights);\n    void initRenderQueue();',1);vendor=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'OgreSceneManager.cpp').read_text();m=re.search(r'void SceneManager::renderObjects\([^)]*\)',vendor);b=vendor.index('{',m.end());end=b+1;depth=1
while depth:depth+=(vendor[end]=='{')-(vendor[end]=='}');end+=1
s+='\nnamespace Ogre {\n'+vendor[m.start():end].replace('SceneManager::','RbxSceneManager::')+'\n}\n';s='\n'.join(l.rstrip() for l in s.splitlines())+'\n';bindings={r['address']:r['symbol'] for r in json.loads((p/'frame-proof.json').read_text())};outputs=[]
for profile,text in [('fast',s),('vector-precise',s.replace('#include <Ogre.h>','#pragma float_control(precise, on, push)\n#include <OgreVector3.h>\n#pragma float_control(pop)\n#include <Ogre.h>',1))]:
 u=libs.add_unit('ogre-1.4.5-dll',text,prefix='roc_native_scene_render_');o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));funcs={s:(b,r) for s,b,r in match.coff_functions(o)}
 for sym in funcs:
  if sym.startswith('?renderObjects@RbxSceneManager'):bindings['0068c070']=sym
 rows=[]
 for a,sym in bindings.items():
  b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];rows.append({'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'size':len(b),'target_size':len(t)})
 print(profile,'exact',sum(r['code_exact'] and r['data_exact'] for r in rows),'/',len(rows),flush=True);outputs.append({'profile':profile,'file':u,'rows':rows});(p/(profile+'-final-unit.cpp')).write_text(text)
 if profile=='fast':(p/'frame-unit.cpp').write_text(text);(p/'frame-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1))
assert all(r['code_exact'] and r['data_exact'] for r in outputs[0]['rows'] if r['address']!='0069e630');assert next(r for r in outputs[1]['rows'] if r['address']=='0069e630')['code_exact'];(p/'final-profile-proof.json').write_text(json.dumps(outputs,indent=1));specpath=Path('rebuild/2008-06/modules/ogre.json');spec=json.loads(specpath.read_text());primary=next(e for e in spec['native_units'] if 'native_scene_render' in e['file'] and len(e['addrs'])>1);secondary=next(e for e in spec['native_units'] if 'native_scene_render' in e['file'] and e['addrs']==['0069e630']);primary['file']=outputs[0]['file'];primary['symbols']={r['address']:r['symbol'] for r in outputs[0]['rows'] if r['address']!='0069e630'};primary['addrs']=list(primary['symbols']);secondary['file']=outputs[1]['file'];spec['layers'][0]['files']=[primary['file']];specpath.write_text(json.dumps(spec,indent=1)+'\n')
