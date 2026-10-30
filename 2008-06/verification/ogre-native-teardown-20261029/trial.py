from pathlib import Path
import json,re
from roc import libs,match
root=Path('work/ogre-native-teardown-20261029');s=Path('work/ogre-native-factories-20261029/complete-unit.cpp').read_text();s=s.replace('    const String& getTypeName() const;', '''    bool hasCamera(const String& name) const;
    bool hasSceneNode(const String& name) const;
    Camera* createCamera(const String& name);
    void destroyCamera(Camera* camera);
    void destroyCamera(const String& name);
    void setWorldGeometry(const String& filename);
    void setWorldGeometry(DataStreamPtr& stream, const String& typeName = StringUtil::BLANK);
    const String& getTypeName() const;''',1)
s=s.replace('    std::puts("Root ready");', '''    root.loadPlugin("rgdx.dll");
    Ogre::RenderSystemList* renderers=root.getAvailableRenderers();
    if (renderers->empty()) return 14;
    root.setRenderSystem(renderers->front());
    std::puts("Native D3D9 plugin ready without render window"); std::fflush(stdout);
    std::puts("Root ready");''',1)
s=s.replace('        Ogre::SceneNode* child=scene.getRootSceneNode()->createChildSceneNode(', '''        Ogre::Camera* camera=scene.createCamera("native-camera-name");
        if (scene.getCamera("native-camera-name")!=camera) return 15;
        scene.destroyCamera("native-camera-name");
        if (scene.hasCamera("native-camera-name")) return 16;
        camera=scene.createCamera("native-camera-pointer");
        scene.destroyCamera(camera);
        if (scene.hasCamera("native-camera-pointer")) return 17;
        scene.createCamera("native-camera-all-a");
        scene.createCamera("native-camera-all-b");
        scene.destroyAllCameras();
        if (scene.hasCamera("native-camera-all-a") || scene.hasCamera("native-camera-all-b")) return 18;
        bool filenameRejected=false,streamRejected=false;
        try { scene.setWorldGeometry("unsupported-native-world"); }
        catch (const Ogre::Exception& error) { filenameRejected=error.getNumber()==Ogre::Exception::ERR_INVALIDPARAMS && error.getLine()==1306; }
        Ogre::DataStreamPtr stream;
        try { scene.setWorldGeometry(stream); }
        catch (const Ogre::Exception& error) { streamRejected=error.getNumber()==Ogre::Exception::ERR_INVALIDPARAMS && error.getLine()==1315; }
        if (!filenameRejected || !streamRejected) return 19;
        std::puts("Native camera lifetime and distinct world-geometry signatures passed"); std::fflush(stdout);
        Ogre::SceneNode* child=scene.getRootSceneNode()->createChildSceneNode(''',1)
s=s.replace('        std::puts("Scene child linked"); std::fflush(stdout);', '''        std::puts("Scene child linked"); std::fflush(stdout);
        scene.createMovableObject("native-clear-light", "Light");
        scene.clearScene();
        if (scene.hasSceneNode("child") || scene.hasMovableObject("native-clear-light", "Light")) return 20;
        scene.getRootSceneNode()->createChildSceneNode("native-destructor-child");
        scene.createMovableObject("native-destructor-light", "Light");
        scene.createCamera("native-destructor-camera");
        std::puts("Explicit clearScene passed; destructor owns final scene objects"); std::fflush(stdout);''',1)
vendor=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'OgreSceneManager.cpp').read_text();oldcam=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'roc_rbxscene_ctor_0606b79b7c96ed1a.cpp').read_text();oldall=(libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src']/'roc_rbxscene_destroyall_stock_7a06ef240f3628d2.cpp').read_text();bodies=[]
items=[(vendor,r'Camera\* SceneManager::createCamera\([^)]*\)',225),(oldcam,r'void RbxSceneManager::destroyCamera\(Camera\* cam\)',None),(oldcam,r'void RbxSceneManager::destroyCamera\(const String& name\)',None),(oldall,r'void RbxSceneManager::destroyAllCameras\([^)]*\)',None),(vendor,r'void SceneManager::clearScene\([^)]*\)',None),(vendor,r'void SceneManager::setWorldGeometry\(const String& filename\)',1304),(vendor,r'void SceneManager::setWorldGeometry\(DataStreamPtr& stream,[^)]*\)',1313)]
items.extend([(vendor,r'bool SceneManager::hasCamera\([^)]*\) const',None),(vendor,r'bool SceneManager::hasSceneNode\([^)]*\) const',None)])
for text,pattern,line in items:
 m=re.search(pattern,text);assert m,pattern;b=text.index('{',m.end());end=b+1;depth=1
 while depth:depth+=(text[end]=='{')-(text[end]=='}');end+=1
 body=re.sub(r'(?<!Rbx)SceneManager::','RbxSceneManager::',text[m.start():end])
 if line==225:body='#line 224 ".\\\\RbxSceneManager.cpp"\n'+body
 elif line:body=body.replace('    OGRE_EXCEPT(', '#line '+str(line)+' ".\\\\RbxSceneManager.cpp"\n    OGRE_EXCEPT(',1)
 bodies.append(body)
s+='\nnamespace Ogre {\n'+'\n'.join(bodies)+'\n}\n';s='\n'.join(l.rstrip() for l in s.splitlines())+'\n';u=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_scene_teardown_');(root/'unit.cpp').write_text(s);(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));(root/'unit.obj').write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};spec=json.loads((root/'baseline-spec.json').read_text());bindings=dict(next(e for e in spec['native_units'] if 'native_scene_factories' in e['file'])['symbols'])
for sym in funcs:
 for prefix,a in [('?hasCamera@RbxSceneManager','006944c0'),('?hasSceneNode@RbxSceneManager','00694630'),('?createCamera@RbxSceneManager','0069a000'),('?destroyAllCameras@RbxSceneManager','006987c0'),('?clearScene@RbxSceneManager','00698890')]:
  if sym.startswith(prefix):bindings[a]=sym
 if sym.startswith('?destroyCamera@RbxSceneManager'):bindings['006985e0' if 'PAVCamera' in sym else '00698710']=sym
 if sym.startswith('?setWorldGeometry@RbxSceneManager'):bindings['0068be30' if 'SharedPtr' in sym else '0068bda0']=sym
rows=[]
for a,sym in bindings.items():
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];row={'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'bad':bad,'size':len(b),'target_size':len(t)};rows.append(row);print(a,row['code_exact'],row['data_exact'],len(b),len(t),bad,flush=True)
(root/'proof.json').write_text(json.dumps(rows,indent=1))
