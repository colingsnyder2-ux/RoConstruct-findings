// from server: 100% by auto
// roc 2011-06 00548c70  unit: G3D::TextInput::TokenException  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548c70
//
// 00548c70  6aff                 push -1
// 00548c72  682cf19d00           push 0x9df12c
// 00548c77  64a100000000         mov eax, dword ptr fs:[0]
// 00548c7d  50                   push eax
// 00548c7e  64892500000000       mov dword ptr fs:[0], esp
// 00548c85  81ecc4000000         sub esp, 0xc4
// 00548c8b  55                   push ebp
// 00548c8c  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00548c93  56                   push esi
// 00548c94  57                   push edi
// 00548c95  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 00548c9c  57                   push edi
// 00548c9d  55                   push ebp
// 00548c9e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00548ca6  ff15e409a400         call dword ptr [0xa409e4]
// 00548cac  40                   inc eax
// 00548cad  83c408               add esp, 8
// 00548cb0  3da1000000           cmp eax, 0xa1
// 00548cb5  0f8e8b000000         jle 0x548d46
// 00548cbb  3d40420f00           cmp eax, 0xf4240
// 00548cc0  7d26                 jge 0x548ce8
// 00548cc2  6841420f00           push 0xf4241
// 00548cc7  e8645fffff           call 0x53ec30
// 00548ccc  57                   push edi
// 00548ccd  55                   push ebp
// 00548cce  8bf0                 mov esi, eax
// 00548cd0  6840420f00           push 0xf4240
// 00548cd5  56                   push esi
// 00548cd6  ff155009a400         call dword ptr [0xa40950]
// 00548cdc  83c414               add esp, 0x14
// 00548cdf  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 00548ce6  eb14                 jmp 0x548cfc
// 00548ce8  50                   push eax
// 00548ce9  e8425fffff           call 0x53ec30
// 00548cee  57                   push edi
// 00548cef  8bf0                 mov esi, eax
// 00548cf1  55                   push ebp
// 00548cf2  56                   push esi
// 00548cf3  ff15c008a400         call dword ptr [0xa408c0]
// 00548cf9  83c410               add esp, 0x10
// 00548cfc  56                   push esi
// 00548cfd  8d4c2414             lea ecx, [esp + 0x14]
// 00548d01  ff15c404a400         call dword ptr [0xa404c4]
// 00548d07  56                   push esi
// 00548d08  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00548d13  e8285fffff           call 0x53ec40
// 00548d18  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 00548d1f  83c404               add esp, 4
// 00548d22  8d442410             lea eax, [esp + 0x10]
// 00548d26  50                   push eax
// 00548d27  8bce                 mov ecx, esi
// 00548d29  ff15c804a400         call dword ptr [0xa404c8]
// 00548d2f  8d4c2410             lea ecx, [esp + 0x10]
// 00548d33  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 00548d3e  ff15d004a400         call dword ptr [0xa404d0]
// 00548d44  eb24                 jmp 0x548d6a
// 00548d46  57                   push edi
// 00548d47  8d4c2430             lea ecx, [esp + 0x30]
// 00548d4b  55                   push ebp
// 00548d4c  51                   push ecx
// 00548d4d  ff15c008a400         call dword ptr [0xa408c0]
// 00548d53  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 00548d5a  83c40c               add esp, 0xc
// 00548d5d  8d54242c             lea edx, [esp + 0x2c]
// 00548d61  52                   push edx
// 00548d62  8bce                 mov ecx, esi
// 00548d64  ff15c404a400         call dword ptr [0xa404c4]
// 00548d6a  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00548d71  5f                   pop edi
// 00548d72  8bc6                 mov eax, esi
// 00548d74  5e                   pop esi
// 00548d75  5d                   pop ebp
// 00548d76  64890d00000000       mov dword ptr fs:[0], ecx
// 00548d7d  81c4d0000000         add esp, 0xd0
// 00548d83  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
