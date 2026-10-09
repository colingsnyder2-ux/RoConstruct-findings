// roc 2009-12 00912bf0  unit: Ogre::RbxMeshLoader  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00912bf0
//
// 00912bf0  8a442404             mov al, byte ptr [esp + 4]
// 00912bf4  3a4114               cmp al, byte ptr [ecx + 0x14]
// 00912bf7  7403                 je 0x912bfc
// 00912bf9  884114               mov byte ptr [ecx + 0x14], al
// 00912bfc  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?setEnabled@ToneMap@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
