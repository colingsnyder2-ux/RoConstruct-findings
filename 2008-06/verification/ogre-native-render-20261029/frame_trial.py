from pathlib import Path
import json
from roc import libs,match
p=Path('work/ogre-native-render-20261029');s=(p/'unit.cpp').read_text();s+='''
#include <d3d9.h>
extern "C" int native_ogre_frame_smoke() {
    struct HiddenWindow {
        HWND handle;
        HiddenWindow() : handle(CreateWindowExA(0,"STATIC","RoConstruct native Ogre frame",WS_POPUP,0,0,64,64,0,0,GetModuleHandleA(0),0)) {}
        ~HiddenWindow() { if (handle) DestroyWindow(handle); }
    } host;
    if (!host.handle) return 1;
    try {
        Ogre::LogManager logs;
        Ogre::Root root("", "", "");
        root.loadPlugin("rgdx.dll");
        Ogre::RenderSystemList* systems=root.getAvailableRenderers();
        if (systems->empty()) return 2;
        root.setRenderSystem(systems->front());
        root.initialise(false);
        Ogre::NameValuePairList options;
        options["externalWindowHandle"]=Ogre::StringConverter::toString((size_t)host.handle);
        options["vsync"]="false";
        options["FSAA"]="0";
        options["colourDepth"]="32";
        Ogre::RenderWindow* window=root.createRenderWindow("native-offscreen",64,64,false,&options);
        {
            Ogre::RbxSceneManager scene("native-frame-scene");
            Ogre::Camera* camera=scene.createCamera("native-frame-camera");
            camera->setPosition(0,0,3);
            camera->lookAt(0,0,0);
            camera->setNearClipDistance(0.1f);
            camera->setFarClipDistance(100);
            camera->setAspectRatio(1);
            Ogre::Viewport* viewport=window->addViewport(camera);
            viewport->setBackgroundColour(Ogre::ColourValue(1,0,1));
            viewport->setOverlaysEnabled(false);
            viewport->setSkiesEnabled(false);
            viewport->setShadowsEnabled(false);
            Ogre::MaterialPtr material=Ogre::MaterialManager::getSingleton().create("native-flat-red",Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
            material->setLightingEnabled(false);
            material->setCullingMode(Ogre::CULL_NONE);
            Ogre::ManualObject* triangle=scene.createManualObject("native-triangle");
            triangle->begin("native-flat-red",Ogre::RenderOperation::OT_TRIANGLE_LIST);
            triangle->position(-1,-1,0);triangle->colour(1,0,0);
            triangle->position(1,-1,0);triangle->colour(1,0,0);
            triangle->position(0,1,0);triangle->colour(1,0,0);
            triangle->end();
            scene.getRootSceneNode()->createChildSceneNode("native-triangle-node")->attachObject(triangle);
            Ogre::Light* directional=scene.createLight("native-frame-directional");
            directional->setType(Ogre::Light::LT_DIRECTIONAL);
            directional->setDirection(0,0,-1);
            Ogre::Light* point=scene.createLight("native-frame-point");
            point->setType(Ogre::Light::LT_POINT);
            point->setAttenuation(10,1,0,0);
            window->update(false);
            IDirect3DDevice9* device=0;
            window->getCustomAttribute("D3DDEVICE",&device);
            IDirect3DSurface9* surface=0;
            if (FAILED(device->GetRenderTarget(0,&surface))) return 3;
            D3DSURFACE_DESC desc;
            surface->GetDesc(&desc);
            if (desc.Format!=D3DFMT_X8R8G8B8 && desc.Format!=D3DFMT_A8R8G8B8) {surface->Release();return 4;}
            IDirect3DSurface9* pixels=0;
            HRESULT copied=device->CreateOffscreenPlainSurface(desc.Width,desc.Height,desc.Format,D3DPOOL_SYSTEMMEM,&pixels,0);
            if (FAILED(copied)) {surface->Release();return 5;}
            copied=device->GetRenderTargetData(surface,pixels);surface->Release();
            if (FAILED(copied)) {pixels->Release();return 6;}
            D3DLOCKED_RECT locked;
            if (FAILED(pixels->LockRect(&locked,0,D3DLOCK_READONLY))) {pixels->Release();return 7;}
            unsigned char* centre=(unsigned char*)locked.pBits+(desc.Height/2)*locked.Pitch+(desc.Width/2)*4;
            unsigned char* corner=(unsigned char*)locked.pBits;
            bool red=centre[2]>200 && centre[1]<30 && centre[0]<30;
            bool magenta=corner[2]>200 && corner[1]<30 && corner[0]>200;
            std::printf("Native frame %ux%u centre RGB=%u,%u,%u corner RGB=%u,%u,%u\\n",desc.Width,desc.Height,centre[2],centre[1],centre[0],corner[2],corner[1],corner[0]);
            pixels->UnlockRect();pixels->Release();
            window->removeAllViewports();
            if (!red || !magenta) return 8;
        }
        std::puts("Native Ogre renderScene/setPass frame readback passed");
        return 0;
    } catch (const Ogre::Exception& error) { std::puts(error.getFullDescription().c_str()); return 9; }
}
''';s='\n'.join(l.rstrip() for l in s.splitlines())+'\n';u=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_scene_render_');(p/'frame-unit.cpp').write_text(s);(p/'frame-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':u},indent=1));o=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',u,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'));(p/'frame.obj').write_bytes(o);funcs={s:(b,r) for s,b,r in match.coff_functions(o)};rows=[]
for row in json.loads((p/'proof.json').read_text()):
 a,sym=row['address'],row['symbol'];b,r=funcs[sym];t,tr,_=match.target('2008-06',a);bad=match.data_check('2008-06',a,t,match.coff_data_refs(o,sym))[1];q={'address':a,'symbol':sym,'code_exact':len(b)==len(t) and match.exact_match(t,tr,b,r),'data_exact':not bad,'size':len(b),'target_size':len(t)};rows.append(q)
(p/'frame-proof.json').write_text(json.dumps(rows,indent=1));print('frame compile exact',sum(r['code_exact'] and r['data_exact'] for r in rows),'/',len(rows),flush=True)
