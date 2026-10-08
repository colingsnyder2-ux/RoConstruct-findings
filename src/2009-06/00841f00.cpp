// roc 2009-06 00841f00  unit: Ogre::RbxSceneNode  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00841f00
//
// 00841f00  8a442404             mov al, byte ptr [esp + 4]
// 00841f04  3a4114               cmp al, byte ptr [ecx + 0x14]
// 00841f07  7403                 je 0x841f0c
// 00841f09  884114               mov byte ptr [ecx + 0x14], al
// 00841f0c  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?setEnabled@ToneMap@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
