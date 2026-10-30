from pathlib import Path
import json
from roc import libs,match,rebuild
root=Path('work/ogre-native-containers-20261029');text='''#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <OgreStringVector.h>
#include <list>
#include <map>
#include <vector>

template class std::vector<Ogre::Real>;
template class std::vector<Ogre::String>;
template class std::vector<Ogre::Vector3>;
template class std::vector<Ogre::Vector4>;
template class std::vector<Ogre::Plane>;
template class std::vector<Ogre::Light*>;
template class std::vector<Ogre::Renderable*>;
template class std::list<Ogre::AnimationState*>;
template class std::map<Ogre::String, Ogre::MovableObject*>;
''';unit=libs.add_unit('ogre-1.4.5-dll',text,prefix='roc_native_ogre_containers_');(root/'unit.cpp').write_text(text);(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));flags=['/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'];p=Path('research/recipes.json');recipes=json.loads(p.read_text());recipes['ogre-native-containers-20261029']={'op':'fanout','client':'2008-06','hypothesis':'Recover synthetic POD/string/pointer STL snippets using real container types documented in Ogre1.4.5 headers: StringVector, keyframe times, Vector3/Vector4/Plane, LightList/RenderableList, EnabledAnimationStateList and MovableObjectMap. Do not infer original template spelling from identical code alone; bind unique target code/data pairs first and retain ambiguous twins as candidates.','sources':[{'recipe':'ogre-1.4.5-dll','files':[unit],'builds':[21022],'flags':flags}],'result':{'status':'measurement in progress','new_verified':0}};p.write_text(json.dumps(recipes,indent=2)+'\n');inventory=json.loads((root/'source-inventory.json').read_text());targets={}
for row in inventory:
 a=row['addr']
 if match._functions('2008-06').get(a,{}).get('kind','code')!='code':continue
 t,r,_=match.target('2008-06',a);targets.setdefault(len(t),[]).append((a,t,r))
results=[]
for profile,flag in zip(['precise','fast'],flags):
 try:obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,flag))
 except match.CompileError as e:print(profile,str(e)[:300],flush=True);continue
 (root/(profile+'.obj')).write_bytes(obj);defs=rebuild.coff_externals(obj);hits=[]
 for sym,b,r in match.coff_functions(obj):
  if not defs.get(sym):continue
  for a,t,tr in targets.get(len(b),[]):
   if match.exact_match(t,tr,b,r):
    bad=match.data_check('2008-06',a,t,match.coff_data_refs(obj,sym))[1]
    if not bad:hits.append({'address':a,'symbol':sym,'size':len(b)})
 results.append({'profile':profile,'flags':flag,'matches':hits});(root/'trials.json').write_text(json.dumps(results,indent=1));print(profile,'exact pairs',len(hits),'addresses',len({h['address'] for h in hits}),flush=True)
