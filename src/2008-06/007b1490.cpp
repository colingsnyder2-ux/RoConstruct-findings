// roc 2008-06 007b1490  unit: RBX::RenderNew::TextureProxy  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b1490
//
// 007b1490  d9442414             fld dword ptr [esp + 0x14]
// 007b1494  8b442410             mov eax, dword ptr [esp + 0x10]
// 007b1498  8b542408             mov edx, dword ptr [esp + 8]
// 007b149c  83ec30               sub esp, 0x30
// 007b149f  51                   push ecx
// 007b14a0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007b14a4  d91c24               fstp dword ptr [esp]
// 007b14a7  50                   push eax
// 007b14a8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007b14ac  51                   push ecx
// 007b14ad  52                   push edx
// 007b14ae  50                   push eax
// 007b14af  8d4c2414             lea ecx, [esp + 0x14]
// 007b14b3  e8186eccff           call 0x4782d0
// 007b14b8  50                   push eax
// 007b14b9  e842f7ffff           call 0x7b0c00
// 007b14be  83c448               add esp, 0x48
// 007b14c1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?axes@Draw@G3D@@SAXPAVRenderDevice@2@ABVColor4@2@11M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
