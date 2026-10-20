// from server: 93% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: ogre-1.4.5-dll roc_espeon_ogrestatictranslation8ca93d25554921aa.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include <OgreVector3.h>
#include <OgreMatrix4.h>
struct S{char pad[0xf0];Ogre::Matrix4 transform;const Ogre::Vector3& f()const;};
const Ogre::Vector3& S::f()const{static Ogre::Vector3 result(transform.getTrans());return result;}
