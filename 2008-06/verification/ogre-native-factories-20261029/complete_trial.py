from pathlib import Path
import json
from roc import libs,match
root=Path('work/ogre-native-factories-20261029');s=(root/'unit.cpp').read_text();decl='''    void destroyMovableObject(MovableObject* object);
    void destroyAllMovableObjectsByType(const String& typeName);
    void destroyAllMovableObjects();
    MovableObjectIterator getMovableObjectIterator(const String& typeName);
''';s=s.replace('    void injectMovableObject(MovableObject* object);',decl+'    void injectMovableObject(MovableObject* object);',1)
vendor=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'OgreSceneManager.cpp').read_text().replace('MovableObjectIterator \n','MovableObjectIterator\n');bodies=[]
for sig in ['void SceneManager::destroyMovableObject(MovableObject*', 'void SceneManager::destroyAllMovableObjectsByType(', 'void SceneManager::destroyAllMovableObjects(void)', 'SceneManager::MovableObjectIterator SceneManager::getMovableObjectIterator(']:
 if sig not in vendor:
  sig=sig.replace('SceneManager::MovableObjectIterator SceneManager::','SceneManager::MovableObjectIterator\nSceneManager::')
 start=vendor.index(sig);brace=vendor.index('{',start);end=brace+1;depth=1
 while depth:depth+=(vendor[end]=='{')-(vendor[end]=='}');end+=1
 bodies.append(vendor[start:end].replace('SceneManager::','RbxSceneManager::'))
s+='\nnamespace Ogre {\n'+'\n'.join(bodies)+'\n}\n'
s=s.replace('        std::puts("Factory creation, duplicate rejection and destruction passed");', '''        owned=scene.createMovableObject("native-pointer", "Light");
        scene.destroyMovableObject(owned);
        if (scene.hasMovableObject("native-pointer", "Light")) return 9;
        scene.createMovableObject("native-bulk-a", "Light");
        scene.createMovableObject("native-bulk-b", "Light");
        Ogre::SceneManager::MovableObjectIterator items=scene.getMovableObjectIterator("Light");
        unsigned count=0;
        while (items.hasMoreElements()) {
            if (items.getNext()->_getManager()!=&scene) return 10;
            ++count;
        }
        if (count!=2) return 11;
        scene.injectMovableObject(&external);
        scene.destroyAllMovableObjectsByType("Light");
        if (scene.getMovableObjectIterator("Light").hasMoreElements() || external.getName()!="native-injected") return 12;
        scene.createMovableObject("native-all-a", "Light");
        scene.createMovableObject("native-all-b", "Light");
        scene.injectMovableObject(&external);
        scene.destroyAllMovableObjects();
        if (scene.getMovableObjectIterator("Light").hasMoreElements() || external.getName()!="native-injected") return 13;
        std::puts("Factory allocation, duplicate rejection, iteration and all destroy paths passed");''')
s='\n'.join(l.rstrip() for l in s.splitlines())+'\n';u=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_scene_factories_');(root/'complete-unit.cpp').write_text(s);(root/'complete-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));(root/'complete.obj').write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};spec=json.load(open('rebuild/2008-06/modules/ogre.json'));bindings=dict(next(e for e in spec['native_units'] if 'native_scene_factories' in e['file'])['symbols']);names={'destroyMovableObject':'0068ce50','destroyAllMovableObjectsByType':'0069e020','destroyAllMovableObjects':'00699740','getMovableObjectIterator':'0069e110'}
for sym in funcs:
 for name,a in names.items():
  if sym.startswith('?'+name+'@RbxSceneManager') and not (name=='destroyMovableObject' and 'ABV?$basic_string' in sym):bindings[a]=sym
rows=[]
for a,sym in bindings.items():
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];row={'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'bad':bad,'size':len(b),'target_size':len(t)};rows.append(row);print(a,row['code_exact'],row['data_exact'],len(b),len(t),flush=True)
(root/'complete-proof.json').write_text(json.dumps(rows,indent=1))
