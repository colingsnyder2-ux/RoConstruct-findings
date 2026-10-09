// roc 2008-06 0069c5d0  unit: Ogre::RbxSceneManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069c5d0
//
// 0069c5d0  8d442404             lea eax, [esp + 4]
// 0069c5d4  50                   push eax
// 0069c5d5  81c10c430000         add ecx, 0x430c
// 0069c5db  e8c04dd8ff           call 0x4213a0
// 0069c5e0  c20400               ret 4
// library ogre-1.6.4/OgreSceneManager.cpp (function ?addRenderQueueListener@SceneManager@Ogre@@UAEXPAVRenderQueueListener@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
