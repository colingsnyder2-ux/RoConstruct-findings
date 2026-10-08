// from server: 100% by auto
// roc 2008-06 00473ef0  unit: G3D::Texture  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473ef0
//
// 00473ef0  6aff                 push -1
// 00473ef2  683bf47b00           push 0x7bf43b
// 00473ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00473efd  50                   push eax
// 00473efe  64892500000000       mov dword ptr fs:[0], esp
// 00473f05  51                   push ecx
// 00473f06  6a74                 push 0x74
// 00473f08  c744240400000000     mov dword ptr [esp + 4], 0
// 00473f10  e80bca2200           call 0x6a0920
// 00473f15  83c404               add esp, 4
// 00473f18  890424               mov dword ptr [esp], eax
// 00473f1b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00473f23  85c0                 test eax, eax
// 00473f25  7439                 je 0x473f60
// 00473f27  d9442434             fld dword ptr [esp + 0x34]
// 00473f2b  51                   push ecx
// 00473f2c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00473f30  d91c24               fstp dword ptr [esp]
// 00473f33  51                   push ecx
// 00473f34  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00473f38  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 00473f3c  52                   push edx
// 00473f3d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00473f41  52                   push edx
// 00473f42  8b542438             mov edx, dword ptr [esp + 0x38]
// 00473f46  52                   push edx
// 00473f47  8b542430             mov edx, dword ptr [esp + 0x30]
// 00473f4b  51                   push ecx
// 00473f4c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00473f50  51                   push ecx
// 00473f51  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00473f55  52                   push edx
// 00473f56  51                   push ecx
// 00473f57  8bc8                 mov ecx, eax
// 00473f59  e852f8ffff           call 0x4737b0
// 00473f5e  eb02                 jmp 0x473f62
// 00473f60  33c0                 xor eax, eax
// 00473f62  56                   push esi
// 00473f63  8b742418             mov esi, dword ptr [esp + 0x18]
// 00473f67  50                   push eax
// 00473f68  8bce                 mov ecx, esi
// 00473f6a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00473f72  c70600000000         mov dword ptr [esi], 0
// 00473f78  e823501200           call 0x598fa0
// 00473f7d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00473f81  8bc6                 mov eax, esi
// 00473f83  5e                   pop esi
// 00473f84  64890d00000000       mov dword ptr fs:[0], ecx
// 00473f8b  83c410               add esp, 0x10
// 00473f8e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
