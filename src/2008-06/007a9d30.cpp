// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lang: cpp
// roc-lib: g3d-6.09-dll roc_scene_light_array_1159df62033510c6.cpp

// Candidate translation unit (score above; library headers required).
// Native 007a9d30: scene light synchronization. Names are behavioral analogues.
#undef OGRE_NONCLIENT_BUILD
#include "../../ogre-1.4.5/ogrenew/OgreMain/include/Ogre.h"
#include <GLG3D/LightingParameters.h>
#include <algorithm>
#include <string>
using G3D::Color3;
class SceneLightSync {public:void sync(void*,bool);};
#define FIELD(T,N) (*reinterpret_cast<T*>(reinterpret_cast<char*>(this)+(N)))
#define LIGHTS (*reinterpret_cast<G3D::Array<G3D::GLight>*>(reinterpret_cast<char*>(FIELD(void*,0x30c))+0x4c))
extern std::string lightIndex(const int&);
void SceneLightSync::sync(void* context,bool) {
 float radius=1000.0f;
 Ogre::Vector3 center(0,0,0);
 Ogre::SceneManager* scene=*reinterpret_cast<Ogre::SceneManager**>(reinterpret_cast<char*>(context)+4);
 const Color3& ambient=FIELD(Color3,0x354);
 scene->setAmbientLight(Ogre::ColourValue(ambient.r,ambient.g,ambient.b));
 const Color3& top=FIELD(Color3,0x338);
 const Color3& bottom=FIELD(Color3,0x344);
 float avgBottom=(bottom.b+bottom.g+bottom.r)*0.3333f;
 Color3 bottomDelta=bottom-Color3(avgBottom,avgBottom,avgBottom);
 float avgTop=(top.b+top.g+top.r)*0.3333f;
 Color3 topDelta=top-Color3(avgTop,avgTop,avgTop);
 float brightness=FIELD(float,0x350);
 if(brightness>5)brightness=5;else if(brightness<0.05f)brightness=0.05f;
 int i=0;
 for(;i<LIGHTS.size();++i) {
  const G3D::GLight& original=LIGHTS[i];
  Ogre::String name=Ogre::String("rbxlight")+lightIndex(i);
  Ogre::Light* light;
  if(!scene->hasLight(name)) {
   light=scene->createLight(name);
   if(light) Ogre::LogManager::getSingleton().logMessage(Ogre::String("RbxGfx: created light")+name);
   else Ogre::LogManager::getSingleton().logMessage(Ogre::String("RbxGfx : FAILED to create light")+name);
  }else light=scene->getLight(name);
  light->setCastShadows(FIELD(bool,0x2f4));
  if(FIELD(void*,0x26c)) {
   const Ogre::AxisAlignedBox& box=*reinterpret_cast<Ogre::AxisAlignedBox*>(reinterpret_cast<char*>(FIELD(void*,0x26c))+0x27c);
   if(!box.isNull()) {
    Ogre::Vector3 size=box.getSize();
    radius=(std::max)((std::max)(size.x,size.y),size.z)*0.8585f*1.3f;
    Ogre::Vector3 point=box.getCenter();center.x=point.x;center.z=point.z;center.y=box.getMinimum().y;
   }
  }
  light->setType(Ogre::Light::LT_POINT);
  Color3 colour=original.color*brightness*FIELD(Color3,0x360);
  colour=colour+topDelta*colour.length();
  light->setDiffuseColour(colour.r,colour.g,colour.b);
  light->setPosition(original.position.x*radius+center.x,original.position.y*radius+center.y,original.position.z*radius+center.z);
  Color3 specular=original.color*FIELD(Color3,0x36c);
  light->setSpecularColour(specular.r,specular.g,specular.b);
 }
 for(Ogre::String name=Ogre::String("rbxlight")+lightIndex(i);scene->hasLight(name);name=Ogre::String("rbxlight")+lightIndex(++i))scene->destroyLight(scene->getLight(name));
 if(LIGHTS.size()==1) {
  const G3D::GLight& original=LIGHTS[0];
  int zero=0;Ogre::String first=Ogre::String("rbxlight")+lightIndex(zero);
  Ogre::Light* primary=scene->getLight(first);
  Ogre::Vector3 position;
  if(primary->getType()==Ogre::Light::LT_DIRECTIONAL)position=-primary->getDirection()*2000.0f;else position=primary->getPosition();
  Ogre::String name("rbxfl");Ogre::Light* fill;
  if(scene->hasLight(name))fill=scene->getLight(name);
  else {fill=scene->createLight(name);fill->setCastShadows(false);fill->setType(Ogre::Light::LT_POINT);}
  fill->setPosition(center*2.0f-position);
  Color3 colour=original.color*brightness*0.4f*FIELD(Color3,0x378)*FIELD(Color3,0x390);
  colour=colour+bottomDelta*colour.length();
  fill->setDiffuseColour(Ogre::ColourValue(colour.r,colour.g,colour.b));
  Color3 specular=FIELD(Color3,0x384)*colour;
  fill->setSpecularColour(specular.r,specular.g,specular.b);
 }
 Color3 average=(FIELD(G3D::Lighting*,0x30c)->ambientTop+FIELD(G3D::Lighting*,0x30c)->ambientBottom)/2.0f;
 if(LIGHTS.size()>0){G3D::Vector3 unused=LIGHTS[0].position.xyz();}
}
