// roc 2008-06 0068c730  unit: Ogre::RbxSceneManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c730
//
// 0068c730  ff8164420000         inc dword ptr [ecx + 0x4264]
// 0068c736  c3                   ret 
// library ogre-1.4.9/OgreSceneManager.cpp (function ?_notifyLightsDirty@SceneManager@Ogre@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.4.9 OgreSceneManager.cpp
