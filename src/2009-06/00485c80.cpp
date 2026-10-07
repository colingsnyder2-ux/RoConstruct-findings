// roc 2009-06 00485c80  unit: Ogre::RbxMeshPartAdapter  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00485c80
//
// 00485c80  d9442404             fld dword ptr [esp + 4]
// 00485c84  d95910               fstp dword ptr [ecx + 0x10]
// 00485c87  c20400               ret 4
// library ogre-1.7.0/OgrePredefinedControllers.cpp (function ?setElapsedTime@FrameTimeControllerValue@Ogre@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgrePredefinedControllers.cpp
