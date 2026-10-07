// roc 2010-06 00557390  unit: seg_00550000  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557390
//
// 00557390  6aff                 push -1
// 00557392  68dc129900           push 0x9912dc
// 00557397  64a100000000         mov eax, dword ptr fs:[0]
// 0055739d  50                   push eax
// 0055739e  64892500000000       mov dword ptr fs:[0], esp
// 005573a5  81ecc4000000         sub esp, 0xc4
// 005573ab  55                   push ebp
// 005573ac  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 005573b3  56                   push esi
// 005573b4  57                   push edi
// 005573b5  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 005573bc  57                   push edi
// 005573bd  55                   push ebp
// 005573be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005573c6  ff15e0a79e00         call dword ptr [0x9ea7e0]
// 005573cc  40                   inc eax
// 005573cd  83c408               add esp, 8
// 005573d0  3da1000000           cmp eax, 0xa1
// 005573d5  0f8e8b000000         jle 0x557466
// 005573db  3d40420f00           cmp eax, 0xf4240
// 005573e0  7d26                 jge 0x557408
// 005573e2  6841420f00           push 0xf4241
// 005573e7  e8b437fbff           call 0x50aba0
// 005573ec  57                   push edi
// 005573ed  55                   push ebp
// 005573ee  8bf0                 mov esi, eax
// 005573f0  6840420f00           push 0xf4240
// 005573f5  56                   push esi
// 005573f6  ff156ca79e00         call dword ptr [0x9ea76c]
// 005573fc  83c414               add esp, 0x14
// 005573ff  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 00557406  eb14                 jmp 0x55741c
// 00557408  50                   push eax
// 00557409  e89237fbff           call 0x50aba0
// 0055740e  57                   push edi
// 0055740f  8bf0                 mov esi, eax
// 00557411  55                   push ebp
// 00557412  56                   push esi
// 00557413  ff15dca79e00         call dword ptr [0x9ea7dc]
// 00557419  83c410               add esp, 0x10
// 0055741c  56                   push esi
// 0055741d  8d4c2414             lea ecx, [esp + 0x14]
// 00557421  ff1510a49e00         call dword ptr [0x9ea410]
// 00557427  56                   push esi
// 00557428  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00557433  e87837fbff           call 0x50abb0
// 00557438  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 0055743f  83c404               add esp, 4
// 00557442  8d442410             lea eax, [esp + 0x10]
// 00557446  50                   push eax
// 00557447  8bce                 mov ecx, esi
// 00557449  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055744f  8d4c2410             lea ecx, [esp + 0x10]
// 00557453  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 0055745e  ff1500a49e00         call dword ptr [0x9ea400]
// 00557464  eb24                 jmp 0x55748a
// 00557466  57                   push edi
// 00557467  8d4c2430             lea ecx, [esp + 0x30]
// 0055746b  55                   push ebp
// 0055746c  51                   push ecx
// 0055746d  ff15dca79e00         call dword ptr [0x9ea7dc]
// 00557473  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 0055747a  83c40c               add esp, 0xc
// 0055747d  8d54242c             lea edx, [esp + 0x2c]
// 00557481  52                   push edx
// 00557482  8bce                 mov ecx, esi
// 00557484  ff1510a49e00         call dword ptr [0x9ea410]
// 0055748a  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00557491  5f                   pop edi
// 00557492  8bc6                 mov eax, esi
// 00557494  5e                   pop esi
// 00557495  5d                   pop ebp
// 00557496  64890d00000000       mov dword ptr fs:[0], ecx
// 0055749d  81c4d0000000         add esp, 0xd0
// 005574a3  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
