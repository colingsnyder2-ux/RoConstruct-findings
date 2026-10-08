// from server: 100% by auto
// roc 2008-06 005099f0  unit: G3D::Shader  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005099f0
//
// 005099f0  6aff                 push -1
// 005099f2  683cbd7c00           push 0x7cbd3c
// 005099f7  64a100000000         mov eax, dword ptr fs:[0]
// 005099fd  50                   push eax
// 005099fe  64892500000000       mov dword ptr fs:[0], esp
// 00509a05  81ecc4000000         sub esp, 0xc4
// 00509a0b  55                   push ebp
// 00509a0c  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00509a13  56                   push esi
// 00509a14  57                   push edi
// 00509a15  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 00509a1c  57                   push edi
// 00509a1d  55                   push ebp
// 00509a1e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00509a26  ff1594278000         call dword ptr [0x802794]
// 00509a2c  40                   inc eax
// 00509a2d  83c408               add esp, 8
// 00509a30  3da1000000           cmp eax, 0xa1
// 00509a35  0f8e8b000000         jle 0x509ac6
// 00509a3b  3d40420f00           cmp eax, 0xf4240
// 00509a40  7d26                 jge 0x509a68
// 00509a42  6841420f00           push 0xf4241
// 00509a47  e8e4eaffff           call 0x508530
// 00509a4c  57                   push edi
// 00509a4d  55                   push ebp
// 00509a4e  8bf0                 mov esi, eax
// 00509a50  6840420f00           push 0xf4240
// 00509a55  56                   push esi
// 00509a56  ff1598278000         call dword ptr [0x802798]
// 00509a5c  83c414               add esp, 0x14
// 00509a5f  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 00509a66  eb14                 jmp 0x509a7c
// 00509a68  50                   push eax
// 00509a69  e8c2eaffff           call 0x508530
// 00509a6e  57                   push edi
// 00509a6f  8bf0                 mov esi, eax
// 00509a71  55                   push ebp
// 00509a72  56                   push esi
// 00509a73  ff159c278000         call dword ptr [0x80279c]
// 00509a79  83c410               add esp, 0x10
// 00509a7c  56                   push esi
// 00509a7d  8d4c2414             lea ecx, [esp + 0x14]
// 00509a81  ff1558248000         call dword ptr [0x802458]
// 00509a87  56                   push esi
// 00509a88  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00509a93  e868e2ffff           call 0x507d00
// 00509a98  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 00509a9f  83c404               add esp, 4
// 00509aa2  8d442410             lea eax, [esp + 0x10]
// 00509aa6  50                   push eax
// 00509aa7  8bce                 mov ecx, esi
// 00509aa9  ff155c248000         call dword ptr [0x80245c]
// 00509aaf  8d4c2410             lea ecx, [esp + 0x10]
// 00509ab3  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 00509abe  ff1568248000         call dword ptr [0x802468]
// 00509ac4  eb24                 jmp 0x509aea
// 00509ac6  57                   push edi
// 00509ac7  8d4c2430             lea ecx, [esp + 0x30]
// 00509acb  55                   push ebp
// 00509acc  51                   push ecx
// 00509acd  ff159c278000         call dword ptr [0x80279c]
// 00509ad3  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 00509ada  83c40c               add esp, 0xc
// 00509add  8d54242c             lea edx, [esp + 0x2c]
// 00509ae1  52                   push edx
// 00509ae2  8bce                 mov ecx, esi
// 00509ae4  ff1558248000         call dword ptr [0x802458]
// 00509aea  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00509af1  5f                   pop edi
// 00509af2  8bc6                 mov eax, esi
// 00509af4  5e                   pop esi
// 00509af5  5d                   pop ebp
// 00509af6  64890d00000000       mov dword ptr fs:[0], ecx
// 00509afd  81c4d0000000         add esp, 0xd0
// 00509b03  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
