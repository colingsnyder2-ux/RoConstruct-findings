#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
extern "C" unsigned sceneNodeSize(){return sizeof(Ogre::SceneNode);}
