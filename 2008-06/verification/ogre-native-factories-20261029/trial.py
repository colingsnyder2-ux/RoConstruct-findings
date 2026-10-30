from pathlib import Path
import json,shutil
from roc import libs,match
root=Path('work/ogre-native-factories-20261029');root.mkdir(parents=True,exist_ok=True)
for a,b in [('modules/ogre.json','baseline-spec.json'),('tests/ogre_link.cpp','baseline-test.cpp')]:shutil.copyfile(Path('rebuild/2008-06')/a,root/b)
for a,b in [('verified/swaps.json','baseline-swaps.json'),('report.json','baseline-report.json'),('force/force_verified.h','baseline-force.h')]:shutil.copyfile(Path('rebuild/2008-06/out/Ogre')/a,root/b)
s=Path('work/ogre-native-scene-20261029/winning-unit.cpp').read_text()
s=s.replace('    void injectMovableObject(MovableObject* object);','    MovableObject* createMovableObject(const String& name, const String& typeName, const NameValuePairList* params = 0);\n    void destroyMovableObject(const String& name, const String& typeName);\n    void injectMovableObject(MovableObject* object);',1)
vendor=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'OgreSceneManager.cpp').read_text();bodies=[]
for sig in ['MovableObject* SceneManager::createMovableObject(', 'void SceneManager::destroyMovableObject(const String&']:
 start=vendor.index(sig);brace=vendor.index('{',start);end=brace+1;depth=1
 while depth:depth+=(vendor[end]=='{')-(vendor[end]=='}');end+=1
 body=vendor[start:end].replace('SceneManager::','RbxSceneManager::')
 if 'createMovableObject' in sig:body=body.replace('\t\t\tOGRE_EXCEPT(', '#line 5335 ".\\\\RbxSceneManager.cpp"\n\t\t\tOGRE_EXCEPT(',1)
 bodies.append(body)
s+='\nnamespace Ogre {\n'+'\n'.join(bodies)+'\n}\n';s='\n'.join(l.rstrip() for l in s.splitlines())+'\n'
s=s.replace('        std::puts("Factory metadata and SDK injection/query passed");', '''        Ogre::MovableObject* owned=scene.createMovableObject("native-owned", "Light");
        if (owned->_getManager()!=&scene || scene.getMovableObject("native-owned", "Light")!=owned) return 6;
        bool duplicate=false;
        try { scene.createMovableObject("native-owned", "Light"); }
        catch (const Ogre::Exception& error) { duplicate=error.getNumber()==Ogre::Exception::ERR_DUPLICATE_ITEM; }
        if (!duplicate) return 7;
        scene.destroyMovableObject("native-owned", "Light");
        if (scene.hasMovableObject("native-owned", "Light")) return 8;
        std::puts("Factory creation, duplicate rejection and destruction passed"); std::fflush(stdout);
        std::puts("Factory metadata and SDK injection/query passed");''')
u=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_scene_factories_');(root/'unit.cpp').write_text(s);(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));spec=json.load(open('rebuild/2008-06/modules/ogre.json'));entry=next(e for e in spec['native_units'] if 'native_scene_state' in e['file']);allrows=[]
for profile,flags in [('fast','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'),('precise','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD')]:
 obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,flags));(root/(profile+'.obj')).write_bytes(obj);funcs={s:(b,r) for s,b,r in match.coff_functions(obj)};bindings=dict(entry['symbols'])
 for sym in funcs:
  if sym.startswith('?createMovableObject@RbxSceneManager'):bindings['0069ddf0']=sym
  if sym.startswith('?destroyMovableObject@RbxSceneManager'):bindings['0069df80']=sym
 for a,sym in bindings.items():
  b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(obj,sym))[1];row={'profile':profile,'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'bad':bad,'size':len(b),'target_size':len(t)};allrows.append(row);print(profile,a,row['code_exact'],row['data_exact'],len(b),len(t),flush=True)
(root/'trials.json').write_text(json.dumps(allrows,indent=1))
