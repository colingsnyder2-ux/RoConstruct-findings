// roc 2008-06 0068c550  unit: Ogre::RbxSceneManager  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c550
//
// 0068c550  8a442404             mov al, byte ptr [esp + 4]
// 0068c554  8881828b0000         mov byte ptr [ecx + 0x8b82], al
// 0068c55a  c20400               ret 4
// library ogre-1.4.9/OgreSceneManager.cpp (function ?_suppressShadows@SceneManager@Ogre@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.4.9 OgreSceneManager.cpp
