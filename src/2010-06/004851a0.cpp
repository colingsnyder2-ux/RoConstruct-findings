// from server: 100% by auto
// roc 2010-06 004851a0  unit: G3D::Texture  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004851a0
//
// 004851a0  6aff                 push -1
// 004851a2  684b1d9a00           push 0x9a1d4b
// 004851a7  64a100000000         mov eax, dword ptr fs:[0]
// 004851ad  50                   push eax
// 004851ae  64892500000000       mov dword ptr fs:[0], esp
// 004851b5  51                   push ecx
// 004851b6  6a74                 push 0x74
// 004851b8  c744240400000000     mov dword ptr [esp + 4], 0
// 004851c0  e8db273200           call 0x7a79a0
// 004851c5  83c404               add esp, 4
// 004851c8  890424               mov dword ptr [esp], eax
// 004851cb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004851d3  85c0                 test eax, eax
// 004851d5  7439                 je 0x485210
// 004851d7  d9442434             fld dword ptr [esp + 0x34]
// 004851db  51                   push ecx
// 004851dc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004851e0  d91c24               fstp dword ptr [esp]
// 004851e3  51                   push ecx
// 004851e4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004851e8  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 004851ec  52                   push edx
// 004851ed  8b542430             mov edx, dword ptr [esp + 0x30]
// 004851f1  52                   push edx
// 004851f2  8b542438             mov edx, dword ptr [esp + 0x38]
// 004851f6  52                   push edx
// 004851f7  8b542430             mov edx, dword ptr [esp + 0x30]
// 004851fb  51                   push ecx
// 004851fc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00485200  51                   push ecx
// 00485201  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00485205  52                   push edx
// 00485206  51                   push ecx
// 00485207  8bc8                 mov ecx, eax
// 00485209  e812f7ffff           call 0x484920
// 0048520e  eb02                 jmp 0x485212
// 00485210  33c0                 xor eax, eax
// 00485212  56                   push esi
// 00485213  8b742418             mov esi, dword ptr [esp + 0x18]
// 00485217  50                   push eax
// 00485218  8bce                 mov ecx, esi
// 0048521a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00485222  c70600000000         mov dword ptr [esi], 0
// 00485228  e8f31a0000           call 0x486d20
// 0048522d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00485231  8bc6                 mov eax, esi
// 00485233  5e                   pop esi
// 00485234  64890d00000000       mov dword ptr fs:[0], ecx
// 0048523b  83c410               add esp, 0x10
// 0048523e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
