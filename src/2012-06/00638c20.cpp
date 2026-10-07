// roc 2012-06 00638c20  unit: G3D::TextInput::TokenException  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638c20
//
// 00638c20  6aff                 push -1
// 00638c22  685c4fab00           push 0xab4f5c
// 00638c27  64a100000000         mov eax, dword ptr fs:[0]
// 00638c2d  50                   push eax
// 00638c2e  64892500000000       mov dword ptr fs:[0], esp
// 00638c35  81ecc4000000         sub esp, 0xc4
// 00638c3b  55                   push ebp
// 00638c3c  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00638c43  56                   push esi
// 00638c44  57                   push edi
// 00638c45  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 00638c4c  57                   push edi
// 00638c4d  55                   push ebp
// 00638c4e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00638c56  ff15dc28b200         call dword ptr [0xb228dc]
// 00638c5c  40                   inc eax
// 00638c5d  83c408               add esp, 8
// 00638c60  3da1000000           cmp eax, 0xa1
// 00638c65  0f8e8b000000         jle 0x638cf6
// 00638c6b  3d40420f00           cmp eax, 0xf4240
// 00638c70  7d26                 jge 0x638c98
// 00638c72  6841420f00           push 0xf4241
// 00638c77  e894ecf6ff           call 0x5a7910
// 00638c7c  57                   push edi
// 00638c7d  55                   push ebp
// 00638c7e  8bf0                 mov esi, eax
// 00638c80  6840420f00           push 0xf4240
// 00638c85  56                   push esi
// 00638c86  ff158429b200         call dword ptr [0xb22984]
// 00638c8c  83c414               add esp, 0x14
// 00638c8f  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 00638c96  eb14                 jmp 0x638cac
// 00638c98  50                   push eax
// 00638c99  e872ecf6ff           call 0x5a7910
// 00638c9e  57                   push edi
// 00638c9f  8bf0                 mov esi, eax
// 00638ca1  55                   push ebp
// 00638ca2  56                   push esi
// 00638ca3  ff15e028b200         call dword ptr [0xb228e0]
// 00638ca9  83c410               add esp, 0x10
// 00638cac  56                   push esi
// 00638cad  8d4c2414             lea ecx, [esp + 0x14]
// 00638cb1  ff154826b200         call dword ptr [0xb22648]
// 00638cb7  56                   push esi
// 00638cb8  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00638cc3  e8781effff           call 0x62ab40
// 00638cc8  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 00638ccf  83c404               add esp, 4
// 00638cd2  8d442410             lea eax, [esp + 0x10]
// 00638cd6  50                   push eax
// 00638cd7  8bce                 mov ecx, esi
// 00638cd9  ff154426b200         call dword ptr [0xb22644]
// 00638cdf  8d4c2410             lea ecx, [esp + 0x10]
// 00638ce3  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 00638cee  ff153c26b200         call dword ptr [0xb2263c]
// 00638cf4  eb24                 jmp 0x638d1a
// 00638cf6  57                   push edi
// 00638cf7  8d4c2430             lea ecx, [esp + 0x30]
// 00638cfb  55                   push ebp
// 00638cfc  51                   push ecx
// 00638cfd  ff15e028b200         call dword ptr [0xb228e0]
// 00638d03  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 00638d0a  83c40c               add esp, 0xc
// 00638d0d  8d54242c             lea edx, [esp + 0x2c]
// 00638d11  52                   push edx
// 00638d12  8bce                 mov ecx, esi
// 00638d14  ff154826b200         call dword ptr [0xb22648]
// 00638d1a  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00638d21  5f                   pop edi
// 00638d22  8bc6                 mov eax, esi
// 00638d24  5e                   pop esi
// 00638d25  5d                   pop ebp
// 00638d26  64890d00000000       mov dword ptr fs:[0], ecx
// 00638d2d  81c4d0000000         add esp, 0xd0
// 00638d33  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
