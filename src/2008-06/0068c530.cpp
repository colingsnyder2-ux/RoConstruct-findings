// roc 2008-06 0068c530  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c530
//
// 0068c530  8a442404             mov al, byte ptr [esp + 4]
// 0068c534  888124430000         mov byte ptr [ecx + 0x4324], al
// 0068c53a  c20400               ret 4
// library ogre-1.4.9/OgreSceneManager.cpp (function ?showBoundingBoxes@SceneManager@Ogre@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.4.9 OgreSceneManager.cpp
