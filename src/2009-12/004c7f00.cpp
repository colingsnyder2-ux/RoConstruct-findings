// roc 2009-12 004c7f00  unit: G3D::Texture  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7f00
//
// 004c7f00  6aff                 push -1
// 004c7f02  68eba59400           push 0x94a5eb
// 004c7f07  64a100000000         mov eax, dword ptr fs:[0]
// 004c7f0d  50                   push eax
// 004c7f0e  64892500000000       mov dword ptr fs:[0], esp
// 004c7f15  51                   push ecx
// 004c7f16  6a74                 push 0x74
// 004c7f18  c744240400000000     mov dword ptr [esp + 4], 0
// 004c7f20  e83bb93200           call 0x7f3860
// 004c7f25  83c404               add esp, 4
// 004c7f28  890424               mov dword ptr [esp], eax
// 004c7f2b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c7f33  85c0                 test eax, eax
// 004c7f35  7439                 je 0x4c7f70
// 004c7f37  d9442434             fld dword ptr [esp + 0x34]
// 004c7f3b  51                   push ecx
// 004c7f3c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004c7f40  d91c24               fstp dword ptr [esp]
// 004c7f43  51                   push ecx
// 004c7f44  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c7f48  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 004c7f4c  52                   push edx
// 004c7f4d  8b542430             mov edx, dword ptr [esp + 0x30]
// 004c7f51  52                   push edx
// 004c7f52  8b542438             mov edx, dword ptr [esp + 0x38]
// 004c7f56  52                   push edx
// 004c7f57  8b542430             mov edx, dword ptr [esp + 0x30]
// 004c7f5b  51                   push ecx
// 004c7f5c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004c7f60  51                   push ecx
// 004c7f61  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004c7f65  52                   push edx
// 004c7f66  51                   push ecx
// 004c7f67  8bc8                 mov ecx, eax
// 004c7f69  e812f8ffff           call 0x4c7780
// 004c7f6e  eb02                 jmp 0x4c7f72
// 004c7f70  33c0                 xor eax, eax
// 004c7f72  56                   push esi
// 004c7f73  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c7f77  50                   push eax
// 004c7f78  8bce                 mov ecx, esi
// 004c7f7a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c7f82  c70600000000         mov dword ptr [esi], 0
// 004c7f88  e8e33bf8ff           call 0x44bb70
// 004c7f8d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c7f91  8bc6                 mov eax, esi
// 004c7f93  5e                   pop esi
// 004c7f94  64890d00000000       mov dword ptr fs:[0], ecx
// 004c7f9b  83c410               add esp, 0x10
// 004c7f9e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
