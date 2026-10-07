// roc 2009-06 00841d40  unit: Ogre::RbxSceneNode  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00841d40
//
// 00841d40  d9442414             fld dword ptr [esp + 0x14]
// 00841d44  8b442410             mov eax, dword ptr [esp + 0x10]
// 00841d48  8b542408             mov edx, dword ptr [esp + 8]
// 00841d4c  83ec30               sub esp, 0x30
// 00841d4f  51                   push ecx
// 00841d50  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00841d54  d91c24               fstp dword ptr [esp]
// 00841d57  50                   push eax
// 00841d58  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00841d5c  51                   push ecx
// 00841d5d  52                   push edx
// 00841d5e  50                   push eax
// 00841d5f  8d4c2414             lea ecx, [esp + 0x14]
// 00841d63  e848dbc5ff           call 0x49f8b0
// 00841d68  50                   push eax
// 00841d69  e842f7ffff           call 0x8414b0
// 00841d6e  83c448               add esp, 0x48
// 00841d71  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
