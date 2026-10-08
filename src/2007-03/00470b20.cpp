// roc 2007-03 00470b20  unit: seg_00470000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470b20
//
// 00470b20  6aff                 push -1
// 00470b22  68cb7e7400           push 0x747ecb
// 00470b27  64a100000000         mov eax, dword ptr fs:[0]
// 00470b2d  50                   push eax
// 00470b2e  51                   push ecx
// 00470b2f  56                   push esi
// 00470b30  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00470b35  33c4                 xor eax, esp
// 00470b37  50                   push eax
// 00470b38  8d44240c             lea eax, [esp + 0xc]
// 00470b3c  64a300000000         mov dword ptr fs:[0], eax
// 00470b42  6a74                 push 0x74
// 00470b44  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00470b4c  e8b7d51a00           call 0x61e108
// 00470b51  83c404               add esp, 4
// 00470b54  89442408             mov dword ptr [esp + 8], eax
// 00470b58  85c0                 test eax, eax
// 00470b5a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00470b62  7439                 je 0x470b9d
// 00470b64  d944243c             fld dword ptr [esp + 0x3c]
// 00470b68  51                   push ecx
// 00470b69  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00470b6d  d91c24               fstp dword ptr [esp]
// 00470b70  51                   push ecx
// 00470b71  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00470b75  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 00470b79  52                   push edx
// 00470b7a  8b542438             mov edx, dword ptr [esp + 0x38]
// 00470b7e  52                   push edx
// 00470b7f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00470b83  52                   push edx
// 00470b84  8b542438             mov edx, dword ptr [esp + 0x38]
// 00470b88  51                   push ecx
// 00470b89  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00470b8d  51                   push ecx
// 00470b8e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00470b92  52                   push edx
// 00470b93  51                   push ecx
// 00470b94  8bc8                 mov ecx, eax
// 00470b96  e8b5f8ffff           call 0x470450
// 00470b9b  eb02                 jmp 0x470b9f
// 00470b9d  33c0                 xor eax, eax
// 00470b9f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00470ba3  50                   push eax
// 00470ba4  8bce                 mov ecx, esi
// 00470ba6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00470bae  c70600000000         mov dword ptr [esi], 0
// 00470bb4  e8d7440000           call 0x475090
// 00470bb9  8bc6                 mov eax, esi
// 00470bbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00470bbf  64890d00000000       mov dword ptr fs:[0], ecx
// 00470bc6  59                   pop ecx
// 00470bc7  5e                   pop esi
// 00470bc8  83c410               add esp, 0x10
// 00470bcb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
