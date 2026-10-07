// roc 2009-06 00841450  unit: Ogre::RbxSceneNode  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00841450
//
// 00841450  6aff                 push -1
// 00841452  68780f8700           push 0x870f78
// 00841457  64a100000000         mov eax, dword ptr fs:[0]
// 0084145d  50                   push eax
// 0084145e  64892500000000       mov dword ptr fs:[0], esp
// 00841465  83ec1c               sub esp, 0x1c
// 00841468  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084146c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00841470  50                   push eax
// 00841471  51                   push ecx
// 00841472  8d542408             lea edx, [esp + 8]
// 00841476  52                   push edx
// 00841477  e83454d3ff           call 0x5768b0
// 0084147c  d9442448             fld dword ptr [esp + 0x48]
// 00841480  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00841484  d95c2408             fstp dword ptr [esp + 8]
// 00841488  8b542440             mov edx, dword ptr [esp + 0x40]
// 0084148c  83c408               add esp, 8
// 0084148f  51                   push ecx
// 00841490  52                   push edx
// 00841491  50                   push eax
// 00841492  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0084149a  e8c1f9ffff           call 0x840e60
// 0084149f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008414a3  64890d00000000       mov dword ptr fs:[0], ecx
// 008414aa  83c438               add esp, 0x38
// 008414ad  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?arrow@Draw@G3D@@SAXABVVector3@2@0PAVRenderDevice@2@ABVColor4@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
