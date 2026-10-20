// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll roc_espeon_skyqueuewidegroup4c189fb1c8753dbd.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include "OgreSceneManager.h"
#include "OgreCamera.h"
#include "OgreSceneNode.h"
#include "OgreEntity.h"
#include "OgreSubEntity.h"
#include "OgreRenderQueue.h"
namespace Ogre {
struct Queue:RenderQueue {__declspec(dllimport) void enqueue(Renderable*,unsigned,unsigned short);};
struct Special {void update(Camera*,RenderQueue*,unsigned);};
struct RbxSceneManager:SceneManager {
 char tail[0x8bdc-sizeof(SceneManager)];Special* special;unsigned reserved;SceneNode* extra;
 void f(Camera*);
};
void RbxSceneManager::f(Camera* camera) {
 if(mSkyPlaneNode)mSkyPlaneNode->setPosition(camera->getDerivedPosition());
 if(mSkyBoxNode){mSkyBoxNode->setPosition(camera->getDerivedPosition());extra->setPosition(camera->getDerivedPosition());}
 if(mSkyDomeNode)mSkyDomeNode->setPosition(camera->getDerivedPosition());
 if(mSkyPlaneEnabled)static_cast<Queue*>(getRenderQueue())->enqueue(mSkyPlaneEntity->getSubEntity(0),mSkyPlaneDrawFirst?5:95,100);
 if(mSkyBoxEnabled){unsigned group=mSkyBoxDrawFirst?5:95;for(int i=0;i<6;++i)static_cast<Queue*>(getRenderQueue())->enqueue(mSkyBoxEntity[i]->getSubEntity(0),group,100);Special* object=special;if(object)object->update(camera,getRenderQueue(),group);}
 if(mSkyDomeEnabled){unsigned group=mSkyDomeDrawFirst?5:95;for(int i=0;i<5;++i)static_cast<Queue*>(getRenderQueue())->enqueue(mSkyDomeEntity[i]->getSubEntity(0),group,100);}
}
}
