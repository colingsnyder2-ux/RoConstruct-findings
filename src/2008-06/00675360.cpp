// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_explosion_native_iterator_assignment39edd632f894cb3f.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/src/roc_particle_native_quaternion_portable2cd547b37aee2f44.cpp"
// Partial binary-derived 00675360 body. Opaque owner; observed offsets only.
#undef OGRE_NONCLIENT_BUILD
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/Ogre.h"
#include "../../../libs/ogre-1.4.5/ogrenew/OgreMain/include/OgreParticleEmitter.h"
#include <G3D/Sphere.h>
#include <G3D/Color4.h>
#include <map>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace Ogre;
extern String explosionMaterialScript;
extern String explosionParticleScript;
extern MaterialPtr explosionMaterial;
extern String resolveParticleTexture(const char*);
static __forceinline void explosionParameters(ParticleSystem* system,ParticleEmitter* emitter,float scale) {
    system->setParticleQuota(static_cast<unsigned>(static_cast<float>(atoi("400"))*scale));
    float velocity=static_cast<float>(pow(static_cast<double>(scale),static_cast<double>(1.0f/3.0f)));
    emitter->setMinParticleVelocity(atoi("20")*velocity);
    emitter->setMaxParticleVelocity(atoi("30")*velocity);
    float extra=(scale-1.0f)*0.4f;
    emitter->setMinDuration(atoi("1.2")+extra);
    emitter->setMaxDuration(atoi("1.2")+extra);
}
class ExplosionAdornRecovery {
public:
    void explosion(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&);
    template<class T> T& field(unsigned offset) {
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this)+offset);
    }
};
void ExplosionAdornRecovery::explosion(const G3D::Sphere& sphere,const G3D::Color4&,const G3D::Color4&) {
    Vector3 position;
    {
        const Matrix3& rotation=field<Matrix3>(0x114);
        Quaternion orientation(1,0,0,0);
        orientation.FromRotationMatrix(rotation);
        position=field<SceneNode*>(0x30)->createChildSceneNode(field<Vector3>(0x138),orientation)->getPosition();
    }
    char name[64];
    _snprintf(name,64,"%.3f %.3f %.3f",position.x,position.y,position.z);
    LogManager::getSingleton().logMessage(String("RBX expl ")+" r="+StringConverter::toString(sphere.radius));
    typedef std::map<String,SceneNode*> Cache;
    if(field<Cache>(0xb8).find(name)!=field<Cache>(0xb8).end()) {
        ParticleSystem* system=static_cast<ParticleSystem*>(field<Cache>(0xb8)[name]->getAttachedObject(0));
        if(system->getNumParticles()) return;
        ParticleEmitter* emitter=system->getEmitter(0);
        explosionParameters(system,emitter,1.0f);
        emitter->setEnabled(false);
        field<Cache>(0xb8).erase(field<Cache>(0xb8).find(name));
        return;
    }
    std::vector<Cache::iterator> retired;
    Cache::iterator it;
    for(it=field<Cache>(0xb8).begin();it!=field<Cache>(0xb8).end();++it)
        if(!static_cast<ParticleSystem*>(it->second->getAttachedObject(0))->getNumParticles()) retired.push_back(it);
    for(unsigned i=0;i<retired.size();++i) {
        ParticleSystem* system=static_cast<ParticleSystem*>(retired[i]->second->getAttachedObject(0));
        ParticleEmitter* emitter=system->getEmitter(0);
        emitter->setEnabled(false);
        field<Cache>(0xb8).erase(retired[i]);
        LogManager::getSingleton().logMessage("RBX retired "+system->getName());
        explosionParameters(system,emitter,1.0f);
    }
    float scale=sphere.radius*0.25f;
    if(scale>3.0f) scale=3.0f;
    std::vector<SceneNode*>& nodes=field<std::vector<SceneNode*> >(0xa0);
    unsigned index;
    SceneNode* selected;
    for(index=0;index<nodes.size();++index) {
        if(!static_cast<ParticleSystem*>(nodes[index]->getAttachedObject(0))->getEmitter(0)->getEnabled()) {
            selected=nodes[index];
            field<Cache>(0xb8)[name]=selected;
            selected->setPosition(position.x,position.y,position.z);
            ParticleSystem* system=static_cast<ParticleSystem*>(selected->getAttachedObject(0));
            ParticleEmitter* emitter=system->getEmitter(0);
            explosionParameters(system,emitter,scale);
            emitter->setEnabled(true);
            system->_update(0.001f);
            LogManager::getSingleton().logMessage("RBX use "+system->getName());
            break;
        }
    }
    if(index==nodes.size()) {
        if(!MaterialManager::getSingleton().resourceExists("explosion/explosionMatl")) {
            DataStreamPtr script(new MemoryDataStream(const_cast<char*>(explosionMaterialScript.c_str()),explosionMaterialScript.size()+1,false));
            MaterialManager::getSingleton().parseScript(script,"General");
            explosionMaterial=MaterialManager::getSingleton().getByName("explosion/explosionMatl");
            explosionMaterial->getTechnique(0)->getPass(0)->getTextureUnitState(0)->setTextureName(resolveParticleTexture("textures\\explosion.png"),TEX_TYPE_2D);
            if(!ParticleSystemManager::getSingleton().getTemplate("explosion/explosion1")) {
                DataStreamPtr particles(new MemoryDataStream(const_cast<char*>(explosionParticleScript.c_str()),explosionParticleScript.size()+1,false));
                ParticleSystemManager::getSingleton().parseScript(particles,"General");
            }
        }
        SceneManager* manager=*reinterpret_cast<SceneManager**>(static_cast<char*>(field<void*>(4))+4);
        if(!field<SceneNode*>(0x9c)) field<SceneNode*>(0x9c)=manager->getRootSceneNode()->createChildSceneNode(manager->getName()+"rbxexpl");
        ParticleSystem* system=manager->createParticleSystem(manager->getName()+"expl"+StringConverter::toString(index),"explosion/explosion1");
        if(!system) {
            LogManager::getSingleton().logMessage("RBX Error creating psys");
            return;
        }
        ParticleEmitter* emitter=system->getEmitter(0);
        explosionParameters(system,emitter,scale);
        selected=field<SceneNode*>(0x9c)->createChildSceneNode();
        selected->attachObject(system);
        nodes.push_back(selected);
        field<Cache>(0xb8)[name]=selected;
        LogManager::getSingleton().logMessage("RBX created "+system->getName());
    }
    selected->setPosition(position.x,position.y,position.z);
}
