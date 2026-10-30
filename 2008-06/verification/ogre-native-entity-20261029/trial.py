from pathlib import Path
import json,shutil,re
from roc import libs,match
p=Path('work/ogre-native-entity-20261029')
for a,b in [('modules/ogre.json','baseline-spec.json'),('tests/ogre_link.cpp','baseline-test.cpp')]:shutil.copyfile(Path('rebuild/2008-06')/a,p/b)
for a,b in [('verified/swaps.json','baseline-swaps.json'),('report.json','baseline-report.json'),('force/force_verified.h','baseline-force.h')]:shutil.copyfile(Path('rebuild/2008-06/out/Ogre')/a,p/b)
source=Path('work/ogre-native-render-20261029/fast-final-unit.cpp').read_text();sdk=libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src'];sub=(sdk/'roc_native_subentity_shadow_ef04b164e068272c.cpp').read_text();start=sub.index('class RbxSubEntity :');end=sub.index('RbxSubEntity::RbxSubEntity(',start);decl=sub[start:end].rstrip();decl=decl.rsplit('};',1)[0]+'};'
source=source.replace('class RbxSky;',decl+'\nclass RbxSceneNode : public SceneNode {};\nclass RbxSky;',1);source=source.replace('    void renderObjects(', '    void renderSingleObject(const Renderable* renderable, const Pass* pass, bool doLightIteration, const LightList* manualLights = 0);\n    void useRenderableViewProjMode(const Renderable* renderable);\n    void resetViewProjMode();\n    void renderObjects(',1)
s=Path('src/2008-06/0069bc50.cpp').read_text();start=s.index('void RbxSceneManager::renderSingleObject(');b=s.index('{',start);end=b+1;depth=1
while depth:depth+=(s[end]=='{')-(s[end]=='}');end+=1
body=s[start:end].replace('sub->world','sub->transform').replace('currentState','mRbxVisibilityFlag').replace('previousState','mRbxRenderFlag');body=body.replace('static LightList localLightList;','static OutOfLineLightList localLightList;').replace('static_cast<OutOfLineLightList&>(localLightList).begin()','localLightList.begin()')
source+='\nnamespace Ogre {\nstruct OutOfLineLightList : LightList { __declspec(noinline) iterator begin() { return LightList::begin(); } };\n'+body+'\n}\n';source='\n'.join(l.rstrip() for l in source.splitlines())+'\n';u=libs.add_unit('ogre-1.4.5-dll',source,prefix='roc_native_scene_entity_');(p/'unit.cpp').write_text(source);(p/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));(p/'unit.obj').write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};rows=[]
for sym,b,r in match.coff_functions(o):
 if sym.startswith('?renderSingleObject@RbxSceneManager'):
  t,tr,_=match.target('2008-06','0069bc50');bad=match.data_check('2008-06','0069bc50',t,match.coff_data_refs(o,sym))[1];row={'address':'0069bc50','symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'size':len(b),'target_size':len(t),'bad':bad};rows.append(row);print(row,flush=True)
(p/'single-proof.json').write_text(json.dumps(rows,indent=1))
