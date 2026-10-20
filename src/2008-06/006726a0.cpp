// from server: 52% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_adorn_draw_family_ad53efc0d0dcc634.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include <RbxGraphics/Adorn.h>
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreSceneManager.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreManualObject.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreCamera.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreMesh.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreMaterial.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreSphere.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreResourceGroupManager.h"
#include <stdexcept>
#include <G3D/Ray.h>
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreStringConverter.h"
#include <algorithm>
#include <cmath>
// Same complete field declarations as the recovered GLU/Ogre generator units.
namespace Ogre {
class AdornQuadric {
public:
    int normals;
    bool textureCoords;
    int orientation;
    int drawStyle;
    ColourValue colour;
    Vector3 offset;
    AdornQuadric(); // native00685e30; normal constructor call retained.
    void setOffset(const Vector3&); // native00685e10.
    ManualObject* cylinder(SceneManager*,const String&,ManualObject*,float,float,float,int,int);
    ManualObject* disk(SceneManager*,const String&,ManualObject*,float,float,int,int);
};
}
namespace RBX {
class AdornRbxGfx : public Adorn {
public:
    void quad(const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Color4&);
    void cylinderAlongX(float,float,const G3D::Color4&,const G3D::Color4&);
    void ray(const G3D::Ray&,const G3D::Color4&,float);
    Ogre::MeshPtr findMesh(std::string); //006712e0, native by-value string.
    void localMatrix(Ogre::Matrix4&,const Ogre::Vector3&,const Ogre::Vector3&,const Ogre::Quaternion&); //0066faf0,ret16.
    std::string uniqueName(); // 0066fc00: genuine string hidden-result return.
    void updateColor(const G3D::Color4&,bool); // 00670400, ret8.
    void worldMatrix(Ogre::Matrix4&); // 0066fba0, ret4.
    void drawMesh(const Ogre::MeshPtr&,const Ogre::Matrix4&,const Ogre::MaterialPtr&); // 00671f00, ret12.
};
extern Ogre::MeshPtr adornQuadMesh; // native 0097dac8.
extern std::string adornMeshSuffix; // native 0097da68.
void AdornRbxGfx::quad(const G3D::Vector3& v0,const G3D::Vector3& v1,const G3D::Vector3& v2,const G3D::Vector3& v3,const G3D::Color4& color) {
    float y = v0.y-v2.y;
    float z = v0.z-v2.z;
    if (y<0) y=-y;
    if (z<0) z=-z;
    float extent = y>z ? y : z;
    Ogre::Vector3 center(v0.x,(v1.y+v3.y+v2.y+v0.y)*0.25f,(v1.z+v3.z+v0.z+v2.z)*0.25f);
    const G3D::Vector3& position = *(const G3D::Vector3*)((char*)this+0x138);
    void* engine = *(void**)((char*)this+4);
    Ogre::Camera* camera = *(Ogre::Camera**)((char*)engine+8);
    Ogre::Sphere bounds(Ogre::Vector3(position.x+center.x,position.y+center.y,position.z+center.z),extent*1.4f);
    const Ogre::Vector3& eye = camera->getDerivedPosition();
    Ogre::Vector3 delta(position.x-eye.x,position.y-eye.y,position.z-eye.z);
    if (!camera->isVisible(bounds,0)) return;
    if (delta.squaredLength()>extent*extent*3600.0f) return;
    updateColor(color,false);
    if (!(v0.x==v1.x && v1.x==v2.x && v2.x==v3.x))
        throw std::runtime_error("Bad: quad not handled");
    if (adornQuadMesh.isNull()) {
        Ogre::SceneManager* scene = *(Ogre::SceneManager**)((char*)engine+4);
        Ogre::ManualObject* object = scene->createManualObject("ln"+uniqueName());
        object->begin("",Ogre::RenderOperation::OT_TRIANGLE_LIST);
        object->position(0,0.5f,0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(0);
        object->position(0,-0.5f,0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(1);
        object->position(0,-0.5f,-0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(2);
        object->position(0,0.5f,0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(3);
        object->position(0,-0.5f,-0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(4);
        object->position(0,0.5f,-0.5f); object->normal(Ogre::Vector3(1,0,0)); object->index(5);
        object->end();
        adornQuadMesh = object->convertToMesh(scene->getName()+adornMeshSuffix,Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
        float radius = adornQuadMesh->getBoundingSphereRadius();
        Ogre::Vector3 maximum = adornQuadMesh->getBounds().getCenter();
        Ogre::Vector4 parameter(radius,maximum.x,maximum.y,maximum.z);
        void* node = *(void**)((char*)this+0x34);
        // Native slot113 is 00682350, ret8, key + four-float value.
        // Actual Ogre Renderable::setCustomParameter(size_t,const Vector4&) prototype.
        typedef void (__thiscall *SetParameter)(void*,size_t,const Ogre::Vector4&);
        ((SetParameter)(*(void***)node)[113])(node,(size_t)adornQuadMesh->getSubMesh(0),parameter);
    }
    Ogre::Matrix4 world;
    worldMatrix(world);
    Ogre::Matrix4 local;
    local.makeTransform(center,Ogre::Vector3(1,v2.y-v0.y,v2.z-v0.z),Ogre::Quaternion(1,0,0,0));
    world = world.concatenate(local);
    drawMesh(adornQuadMesh,world,*(Ogre::MaterialPtr*)((char*)this+0x24));
}

extern Ogre::MeshPtr adornCylinderMesh; //0097dabc.
extern std::string adornCylinderSuffix; //0097dad4.
void AdornRbxGfx::cylinderAlongX(float radius,float length,const G3D::Color4& solid,const G3D::Color4&) {
    const Ogre::Vector3& position=*(const Ogre::Vector3*)((char*)this+0x138);
    void* engine=*(void**)((char*)this+4);
    Ogre::Camera* camera=*(Ogre::Camera**)((char*)engine+8);
    Ogre::Sphere bounds(Ogre::Vector3(length*0.5f+position.x,position.y,position.z),(radius>length?radius:length)*1.4f);
    if(!camera->isVisible(bounds,0)) return;
    updateColor(solid,false);
    Ogre::AdornQuadric quadric;
    if(adornCylinderMesh.isNull()) {
        Ogre::SceneManager* scene=*(Ogre::SceneManager**)((char*)engine+4);
        Ogre::ManualObject* object=quadric.cylinder(scene,"cyl"+uniqueName(),0,1,1,1,12,1);
        quadric.setOffset(Ogre::Vector3(0,0,1));
        quadric.disk(scene,"dsk"+uniqueName(),object,0,1,12,1);
        quadric.setOffset(Ogre::Vector3(0,0,0));
        quadric.drawStyle=1;
        quadric.disk(scene,"dsk"+uniqueName(),object,0,1,12,1);
        const Ogre::MaterialPtr& material=*(Ogre::MaterialPtr*)((char*)this+0x24);
        object->setMaterialName(0,material->getName());
        object->setMaterialName(1,material->getName());
        object->setMaterialName(2,material->getName());
        adornCylinderMesh=object->convertToMesh(scene->getName()+adornCylinderSuffix,Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
        float meshRadius=adornCylinderMesh->getBoundingSphereRadius();
        Ogre::Vector3 center=adornCylinderMesh->getBounds().getCenter();
        Ogre::Vector4 parameter(meshRadius,center.x,center.y,center.z);
        for(int i=0;i<adornCylinderMesh->getNumSubMeshes();++i) {
            void* node=*(void**)((char*)this+0x34);
            typedef void (__thiscall *SetParameter)(void*,size_t,const Ogre::Vector4&);
            ((SetParameter)(*(void***)node)[113])(node,(size_t)adornCylinderMesh->getSubMesh((unsigned short)i),parameter);
        }
    }
    Ogre::Quaternion orientation(1,0,0,0);
    orientation.FromRotationMatrix(*(Ogre::Matrix3*)((char*)this+0x114));
    Ogre::Matrix4 world;
    world.makeTransform(position,Ogre::Vector3(1,1,1),orientation);
    Ogre::Quaternion turn;
    turn.FromAngleAxis(Ogre::Radian(Ogre::Degree(90)),Ogre::Vector3(0,1,0));
    Ogre::Matrix4 local;
    local.makeTransform(Ogre::Vector3(length*-0.5f,0,0),Ogre::Vector3(radius,radius,length),turn);
    drawMesh(adornCylinderMesh,world.concatenate(local),*(Ogre::MaterialPtr*)((char*)this+0x24));
}

// Opaque receiver of native006719f0: string const& -> MeshPtr&, ret4.
// It is the native cache at this+78; no storage layout is fabricated.
class AdornMeshCache { public: Ogre::MeshPtr& operator[](const std::string&); };
void AdornRbxGfx::ray(const G3D::Ray& value,const G3D::Color4& color,float) {
    updateColor(color,false);
    Ogre::AdornQuadric unusedQuadric;
    std::string key("ray0001");
    Ogre::MeshPtr mesh=findMesh(key);
    if(mesh.isNull()) {
        Ogre::AdornQuadric quadric;
        void* engine=*(void**)((char*)this+4);
        Ogre::SceneManager* scene=*(Ogre::SceneManager**)((char*)engine+4);
        Ogre::ManualObject* object=quadric.cylinder(scene,uniqueName(),0,0.05f,0.05f,1,12,1);
        quadric.setOffset(Ogre::Vector3(0,0,1));
        quadric.cylinder(scene,uniqueName(),object,0.15f,0,0.3f,12,1);
        quadric.drawStyle=1;
        quadric.disk(scene,uniqueName(),object,0,0.15f,12,1);
        quadric.setOffset(Ogre::Vector3(0,0,0));
        quadric.disk(scene,uniqueName(),object,0,0.05f,12,1);
        for(int i=0;i<4;++i)
            object->setMaterialName(i,(*(Ogre::MaterialPtr*)((char*)this+0x24))->getName());
        mesh=object->convertToMesh(scene->getName()+"amsh"+Ogre::StringConverter::toString(*(unsigned int*)((char*)this+0x94)),Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
        (*(AdornMeshCache*)((char*)this+0x78))[key]=mesh;
        float radius=mesh->getBoundingSphereRadius();
        Ogre::Vector3 center=mesh->getBounds().getCenter();
        Ogre::Vector4 parameter(radius,center.x,center.y,center.z);
        for(int i=0;i<mesh->getNumSubMeshes();++i) {
            void* node=*(void**)((char*)this+0x34);
            typedef void (__thiscall *SetParameter)(void*,size_t,const Ogre::Vector4&);
            ((SetParameter)(*(void***)node)[113])(node,(size_t)mesh->getSubMesh((unsigned short)i),parameter);
        }
    }
    float length=std::sqrt(value.direction.x*value.direction.x+value.direction.y*value.direction.y+value.direction.z*value.direction.z)*0.7692307829856873f;
    Ogre::Vector3 direction(value.direction.x,value.direction.y,value.direction.z);
    Ogre::Quaternion rotation=Ogre::Vector3(0,0,1).getRotationTo(direction,Ogre::Vector3::ZERO);
    Ogre::Matrix4 world;
    localMatrix(world,Ogre::Vector3(value.origin.x,value.origin.y,value.origin.z),Ogre::Vector3(length*0.5f,length*0.5f,length),rotation);
    drawMesh(mesh,world,*(Ogre::MaterialPtr*)((char*)this+0x24));
}
}
