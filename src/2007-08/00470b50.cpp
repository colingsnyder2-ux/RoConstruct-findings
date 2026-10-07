// roc 2007-08 00470b50  unit: G3D::Texture  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470b50
//
// 00470b50  6aff                 push -1
// 00470b52  68db707400           push 0x7470db
// 00470b57  64a100000000         mov eax, dword ptr fs:[0]
// 00470b5d  50                   push eax
// 00470b5e  51                   push ecx
// 00470b5f  56                   push esi
// 00470b60  a188518b00           mov eax, dword ptr [0x8b5188]
// 00470b65  33c4                 xor eax, esp
// 00470b67  50                   push eax
// 00470b68  8d44240c             lea eax, [esp + 0xc]
// 00470b6c  64a300000000         mov dword ptr fs:[0], eax
// 00470b72  6a74                 push 0x74
// 00470b74  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00470b7c  e875f31b00           call 0x62fef6
// 00470b81  83c404               add esp, 4
// 00470b84  89442408             mov dword ptr [esp + 8], eax
// 00470b88  85c0                 test eax, eax
// 00470b8a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00470b92  7439                 je 0x470bcd
// 00470b94  d944243c             fld dword ptr [esp + 0x3c]
// 00470b98  51                   push ecx
// 00470b99  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00470b9d  d91c24               fstp dword ptr [esp]
// 00470ba0  51                   push ecx
// 00470ba1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00470ba5  0fb65140             movzx edx, byte ptr [ecx + 0x40]
// 00470ba9  52                   push edx
// 00470baa  8b542438             mov edx, dword ptr [esp + 0x38]
// 00470bae  52                   push edx
// 00470baf  8b542440             mov edx, dword ptr [esp + 0x40]
// 00470bb3  52                   push edx
// 00470bb4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00470bb8  51                   push ecx
// 00470bb9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00470bbd  51                   push ecx
// 00470bbe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00470bc2  52                   push edx
// 00470bc3  51                   push ecx
// 00470bc4  8bc8                 mov ecx, eax
// 00470bc6  e895f8ffff           call 0x470460
// 00470bcb  eb02                 jmp 0x470bcf
// 00470bcd  33c0                 xor eax, eax
// 00470bcf  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00470bd3  50                   push eax
// 00470bd4  8bce                 mov ecx, esi
// 00470bd6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00470bde  c70600000000         mov dword ptr [esi], 0
// 00470be4  e887430000           call 0x474f70
// 00470be9  8bc6                 mov eax, esi
// 00470beb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00470bef  64890d00000000       mov dword ptr fs:[0], ecx
// 00470bf6  59                   pop ecx
// 00470bf7  5e                   pop esi
// 00470bf8  83c410               add esp, 0x10
// 00470bfb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromGLTexture@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IPBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
