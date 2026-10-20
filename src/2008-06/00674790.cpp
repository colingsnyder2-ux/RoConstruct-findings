// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD
// roc-lang: cpp
// roc-lib: ogre-1.4.5-dll roc_particle_sparkle_adcf34500e06491e.cpp

// Candidate translation unit (score above; library headers required).
// Partial binary-derived body, using the authentic Ogre 1.4.5 SDK.
// Opaque owner: only offsets observed in 00674790 are accessed. No size claim.
#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <OgreParticleEmitter.h>
#include <map>
#include <vector>
#include <cstdio>
using namespace Ogre;
extern String sparkleMaterialScript;
extern String sparkleParticleScript;
extern String resolveParticleTexture(const char*);
class ParticleAdornRecovery {
public:
    void sparkle();
    template<class T> T& field(unsigned offset) {
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this)+offset);
    }
};
void ParticleAdornRecovery::sparkle() {
    Quaternion orientation(1,0,0,0);
    orientation.FromRotationMatrix(field<Matrix3>(0x114));
    Vector3 position=field<SceneNode*>(0x30)->createChildSceneNode(field<Vector3>(0x138),orientation)->getPosition();
    char name[64];
    _snprintf(name,64,"%.1f %.1f %.1f",position.x,position.y,position.z);
    typedef std::map<String,SceneNode*> Cache;
    Cache& active=field<Cache>(0xf4);
    if(active.find(name)!=active.end()) {
        ParticleSystem* system=static_cast<ParticleSystem*>(active[name]->getAttachedObject(0));
        if(system->getNumParticles()) return;
        system->getEmitter(0)->setEnabled(false);
        system->setParticleQuota(1);
        active.erase(active.find(name));
        return;
    }
    std::vector<Cache::iterator> retired;
    for(Cache::iterator it=active.begin();it!=active.end();++it)
        if(!static_cast<ParticleSystem*>(it->second->getAttachedObject(0))->getNumParticles()) retired.push_back(it);
    for(unsigned i=0;i<retired.size();++i) {
        ParticleSystem* system=static_cast<ParticleSystem*>(retired[i]->second->getAttachedObject(0));
        system->getEmitter(0)->setEnabled(false);
        active.erase(retired[i]);
        system->setParticleQuota(1);
    }
    std::vector<SceneNode*>& nodes=field<std::vector<SceneNode*> >(0xdc);
    unsigned index;
    for(index=0;index<nodes.size();++index)
        if(!static_cast<ParticleSystem*>(nodes[index]->getAttachedObject(0))->getEmitter(0)->getEnabled()) break;
    SceneNode* selected;
    if(index==nodes.size()) {
        if(!MaterialManager::getSingleton().resourceExists("sparkle/sparkleMatl")) {
            DataStreamPtr script(new MemoryDataStream(const_cast<char*>(sparkleMaterialScript.c_str()),sparkleMaterialScript.size()+1,false));
            MaterialManager::getSingleton().parseScript(script,"General");
            MaterialPtr material=MaterialManager::getSingleton().getByName("sparkle/sparkleMatl");
            material->getTechnique(0)->getPass(0)->getTextureUnitState(0)->setTextureName(resolveParticleTexture("textures\\sparkle.png"),TEX_TYPE_2D);
            if(!ParticleSystemManager::getSingleton().getTemplate("sparkle/sparkle1")) {
                DataStreamPtr particles(new MemoryDataStream(const_cast<char*>(sparkleParticleScript.c_str()),sparkleParticleScript.size()+1,false));
                ParticleSystemManager::getSingleton().parseScript(particles,"General");
            }
        }
        SceneManager* manager=*reinterpret_cast<SceneManager**>(static_cast<char*>(field<void*>(4))+4);
        if(!field<SceneNode*>(0xd8)) field<SceneNode*>(0xd8)=manager->getRootSceneNode()->createChildSceneNode(manager->getName()+"rbxsparkle");
        ParticleSystem* system=manager->createParticleSystem(manager->getName()+"sparkle"+StringConverter::toString(index),"sparkle/sparkle1");
        if(!system) {
            LogManager::getSingleton().logMessage("RBX Error creating psys. John is an idiot.");
            return;
        }
        system->getEmitter(0);
        selected=field<SceneNode*>(0xd8)->createChildSceneNode();
        selected->attachObject(system);
        nodes.push_back(selected);
        active[name]=selected;
        LogManager::getSingleton().logMessage("RBX created "+system->getName());
    } else {
        selected=nodes[index];
        active[name]=selected;
        selected->setPosition(position.x,position.y,position.z);
        ParticleSystem* system=static_cast<ParticleSystem*>(selected->getAttachedObject(0));
        system->getEmitter(0)->setEnabled(true);
        system->_update(0.001f);
    }
    selected->setPosition(position.x,position.y,position.z);
}
