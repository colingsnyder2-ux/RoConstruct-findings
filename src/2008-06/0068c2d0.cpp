// roc 2008-06 0068c2d0  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c2d0
//
// 0068c2d0  8a442404             mov al, byte ptr [esp + 4]
// 0068c2d4  888190420000         mov byte ptr [ecx + 0x4290], al
// 0068c2da  c20400               ret 4
// library ogre-1.4.9/OgreSceneManager.cpp (function ?setDisplaySceneNodes@SceneManager@Ogre@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.4.9 OgreSceneManager.cpp
