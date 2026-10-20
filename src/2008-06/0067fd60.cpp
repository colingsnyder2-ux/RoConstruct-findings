// from server: 97% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_unit_62aa1fe364a1c934.cpp

// Candidate translation unit (score above; library headers required).
// Partial constructor recovery. Only observed offsets are modeled; automatic
// cleanup for partially constructed opaque members remains unresolved.
#undef OGRE_NONCLIENT_BUILD
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/Ogre.h"
#include <G3D/BinaryInput.h>
#include <G3D/fileutils.h>
#include <G3D/Vector3.h>
#include <vector>
#include <new>
#include <cstdlib>
using namespace Ogre;
class SkyStarObject : public ManualObject {
public:
    SkyStarObject(const String& name) : ManualObject(name) {}
    virtual ~SkyStarObject();
};
class SkyRecovery {
public:
    virtual ~SkyRecovery();
    TexturePtr sunTexture, moonTexture, spareTexture, raysTexture;
    BillboardSet* sunSet;
    BillboardSet* moonSet;
    BillboardSet* raysSet;
    SceneNode* sunNode;
    SceneNode* moonNode;
    SceneNode* starsNode;
    SceneNode* skyNode;
    char opaque50[4];
    MaterialPtr sunMaterial, sunRaysMaterial, moonMaterial, material78;
    bool flag84;
    std::vector<Vector3> points;
    std::vector<float> values;
    bool enabledFlag;
    SkyRecovery(SceneManager*,const String&,bool);
    template<class T> T& at(unsigned offset) { return *reinterpret_cast<T*>(reinterpret_cast<char*>(this)+offset); }
};
SkyRecovery::SkyRecovery(SceneManager* manager,const String& path,bool enabled)
    : flag84(false), enabledFlag(enabled) {
    if (!enabled) return;

    moonTexture=TextureManager::getSingleton().load(path+"moon.jpg","General");
    sunTexture=TextureManager::getSingleton().load(path+"sun.jpg","General");
    raysTexture=TextureManager::getSingleton().load(path+"sun-rays.jpg","General");
    const String& prefix=manager->getName();

    sunMaterial=MaterialManager::getSingleton().create(prefix+"sunMatl","General");
    sunMaterial->setSceneBlending(SBF_ONE,SBF_ONE);
    TextureUnitState* texture=sunMaterial->getTechnique(0)->getPass(0)->createTextureUnitState();
    texture->setColourOperationEx(LBX_MODULATE,LBS_TEXTURE,LBS_CURRENT);
    texture->setAlphaOperation(LBX_MODULATE,LBS_TEXTURE,LBS_CURRENT);
    texture->setTextureName(sunTexture->getName());
    sunMaterial->setDepthWriteEnabled(false);
    sunMaterial->setLightingEnabled(false);
    sunRaysMaterial=sunMaterial->clone(prefix+"sunRaysMatl");
    sunRaysMaterial->getTechnique(0)->getPass(0)->getTextureUnitState(0)->setTextureName(raysTexture->getName());

    moonMaterial=MaterialManager::getSingleton().create(prefix+"moonMatl","General");
    moonMaterial->setSceneBlending(SBF_SOURCE_ALPHA,SBF_ONE);
    texture=moonMaterial->getTechnique(0)->getPass(0)->createTextureUnitState();
    texture->setColourOperationEx(LBX_MODULATE,LBS_TEXTURE,LBS_CURRENT);
    texture->setAlphaOperation(LBX_MODULATE,LBS_TEXTURE,LBS_CURRENT);
    texture->setTextureName(moonTexture->getName());
    texture->setTextureName(moonTexture->getName());
    moonMaterial->setDepthWriteEnabled(false);
    moonMaterial->setLightingEnabled(false);

    sunSet=manager->createBillboardSet(prefix+"sunMatl",1);
    sunSet->setDefaultDimensions(1000.0f,1000.0f);
    sunSet->createBillboard(Vector3::ZERO);
    sunSet->createBillboard(Vector3::ZERO);
    sunSet->createBillboard(Vector3::ZERO);
    sunSet->setMaterialName(prefix+"sunMatl");
    raysSet=manager->createBillboardSet(prefix+"sunRays",1);
    raysSet->setDefaultDimensions(1000.0f,1000.0f);
    raysSet->createBillboard(Vector3::ZERO);
    raysSet->setMaterialName(prefix+"sunRaysMatl");
    moonSet=manager->createBillboardSet(prefix+"moon",1);
    moonSet->setDefaultDimensions(500.0f,500.0f);
    moonSet->createBillboard(Vector3::ZERO);
    moonSet->setMaterialName(prefix+"moonMatl");
    skyNode=manager->createSceneNode(prefix+"skyNode");
    sunNode=skyNode->createChildSceneNode(prefix+"sunNode");
    moonNode=skyNode->createChildSceneNode(prefix+"moonNode");
    sunNode->attachObject(sunSet);
    sunNode->attachObject(raysSet);
    moonNode->attachObject(moonSet);
    sunSet->setCastShadows(false);
    raysSet->setCastShadows(false);
    moonSet->setCastShadows(false);

    if(G3D::fileExists(path+"real.str")) {
        G3D::BinaryInput input(path+"real.str",G3D::G3D_LITTLE_ENDIAN,true);
        String header=input.readString(5);
        int count=input.readInt16();
        points.resize(count);
        values.resize(count);
        for(int i=0;i<count;++i) {
            float x=(2.0f*input.readInt16()+1.0f)/65535.0f;
            float y=(2.0f*input.readInt16()+1.0f)/65535.0f;
            float z=(2.0f*input.readInt16()+1.0f)/65535.0f;
            points[i]=Vector3(x*1000.0f,y*1000.0f,z*1000.0f);
            double intensity=(2.0f*input.readInt16()+1.0f)/65535.0f;
            values[i]=intensity*intensity+0.3f;
        }
    } else {
        points.resize(3000);
        values.resize(points.size());
        for(int i=points.size()-1;i>=0;--i) {
            G3D::Vector3 point=G3D::Vector3::random();
            points[i]=Vector3(point.x*1000.0f,point.y*1000.0f,point.z*1000.0f);
            double intensity=std::rand()/(float)RAND_MAX;
            values[i]=intensity*intensity+0.3f;
        }
    }
    starsNode=manager->createSceneNode(prefix+"starsNode");
    for(int size=1;size<=3;++size) {
        material78=MaterialManager::getSingleton().create(prefix+"starsMatl"+StringConverter::toString(size),"General");
        material78->setDepthWriteEnabled(false);
        material78->setLightingEnabled(false);
        material78->setPointSize(size+0.2f);
        String objectName=prefix+"stars"+StringConverter::toString(size);
        SkyStarObject* object=new SkyStarObject(objectName);
        object->begin(material78->getName(),RenderOperation::OT_POINT_LIST);
        for(int i=0;i<(int)points.size();++i) {
            if(values[i]*3.0f>size-1 && values[i]*3.0f<=size)
                object->position(points[i].x,points[i].y,points[i].z);
        }
        object->end();
        object->setMaterialName(0,material78->getName());
        starsNode->attachObject(object);
        object->setCastShadows(false);
    }
}
