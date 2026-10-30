from pathlib import Path
import json,re,shutil
from roc import libs,match
root=Path('work/ogre-native-render-20261029');root.mkdir(parents=True,exist_ok=True)
for a,b in [('modules/ogre.json','baseline-spec.json'),('tests/ogre_link.cpp','baseline-test.cpp')]:shutil.copyfile(Path('rebuild/2008-06')/a,root/b)
for a,b in [('verified/swaps.json','baseline-swaps.json'),('report.json','baseline-report.json'),('force/force_verified.h','baseline-force.h')]:shutil.copyfile(Path('rebuild/2008-06/out/Ogre')/a,root/b)
s=Path('work/ogre-native-teardown-20261029/unit.cpp').read_text();s=s.replace('    bool mRbxVisibilityFlag;','    bool mRbxVisibilityFlag;\n    bool mRbxRenderFlag;',1)
s=s.replace('    const String& getTypeName() const;', '''    void _renderScene(Camera* camera, Viewport* viewport, bool includeOverlays);
    const Pass* _setPass(const Pass* pass, bool evenIfSuppressed = false, bool shadowDerivation = true);
    const Pass* deriveShadowCasterPass(const Pass* pass);
    const Pass* deriveShadowReceiverPass(const Pass* pass);
    void findLightsAffectingFrustum(const Camera* camera);
    void _updateSceneGraph(Camera* camera);
    void _findVisibleObjects(Camera* camera, VisibleObjectsBoundsInfo* bounds, bool onlyShadowCasters);
    RenderQueue* getRenderQueue();
protected:
    void initRenderQueue();
    void prepareRenderQueue();
public:
    const String& getTypeName() const;''',1)
def body(text,pattern):
 m=re.search(pattern,text);assert m,pattern;b=text.index('{',m.end());end=b+1;depth=1
 while depth:depth+=(text[end]=='{')-(text[end]=='}');end+=1
 return re.sub(r'(?<!Rbx)SceneManager::','RbxSceneManager::',text[m.start():end])
base=libs.LIBS/libs.RECIPES['ogre-1.4.5-dll']['src'];vendor=(base/'OgreSceneManager.cpp').read_text();render=(base/'roc_rbxscene_timed_no_viewport_8cefb7f930351b4e.cpp').read_text();passes=(base/'roc_rbxscene_fpfast_63a615e0f16e56ce.cpp').read_text();lights=(base/'roc_espclaude_9260ba432ec6e8a6.cpp').read_text();helper=lights[lights.index('static inline void rocAssign'):lights.index('namespace Ogre {')];s+='\n#define RBX_TIMED_RENDER 1\n'+helper+'\nnamespace Ogre {\nbool gRbxSceneRenderFlag;\n';s+=body(render,r'void RbxSceneManager::_renderScene\([^)]*\)')+'\n';s+=body(passes,r'const Pass\* RbxSceneManager::_setPass\([^)]*\)')+'\n';s+=body(lights,r'void RbxSceneManager::findLightsAffectingFrustum\([^)]*\)')+'\n'
for pattern in [r'void SceneManager::initRenderQueue\([^)]*\)',r'void SceneManager::prepareRenderQueue\([^)]*\)',r'RenderQueue\* SceneManager::getRenderQueue\([^)]*\)',r'void SceneManager::_updateSceneGraph\([^)]*\)',r'void SceneManager::_findVisibleObjects\([^)]*\)']:s+=body(vendor,pattern)+'\n'
s+='}\n';s='\n'.join(l.rstrip() for l in s.splitlines())+'\n';u=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_scene_render_');(root/'unit.cpp').write_text(s);(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));(root/'unit.obj').write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};spec=json.loads((root/'baseline-spec.json').read_text());bindings=dict(next(e for e in spec['native_units'] if 'scene_teardown' in e['file'])['symbols']);names={'_renderScene':'00698cc0','_setPass':'00694680','findLightsAffectingFrustum':'0069e630','_updateSceneGraph':'0068bec0','_findVisibleObjects':'0068bef0','getRenderQueue':'0068b6d0','initRenderQueue':'0068b6f0','prepareRenderQueue':'0069a470'}
for sym in funcs:
 for name,a in names.items():
  if sym.startswith('?'+name+'@RbxSceneManager'):bindings[a]=sym
rows=[]
for a,sym in bindings.items():
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];row={'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'bad':bad,'size':len(b),'target_size':len(t)};rows.append(row);print(a,row['code_exact'],row['data_exact'],len(b),len(t),flush=True)
(root/'proof.json').write_text(json.dumps(rows,indent=1))
