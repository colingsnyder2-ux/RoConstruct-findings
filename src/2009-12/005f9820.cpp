// roc 2009-12 005f9820  unit: G3D::LineSegment  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9820
//
// 005f9820  6aff                 push -1
// 005f9822  68ecf79300           push 0x93f7ec
// 005f9827  64a100000000         mov eax, dword ptr fs:[0]
// 005f982d  50                   push eax
// 005f982e  64892500000000       mov dword ptr fs:[0], esp
// 005f9835  81ecc4000000         sub esp, 0xc4
// 005f983b  55                   push ebp
// 005f983c  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 005f9843  56                   push esi
// 005f9844  57                   push edi
// 005f9845  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 005f984c  57                   push edi
// 005f984d  55                   push ebp
// 005f984e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f9856  ff15d8b89800         call dword ptr [0x98b8d8]
// 005f985c  40                   inc eax
// 005f985d  83c408               add esp, 8
// 005f9860  3da1000000           cmp eax, 0xa1
// 005f9865  0f8e8b000000         jle 0x5f98f6
// 005f986b  3d40420f00           cmp eax, 0xf4240
// 005f9870  7d26                 jge 0x5f9898
// 005f9872  6841420f00           push 0xf4241
// 005f9877  e8240affff           call 0x5ea2a0
// 005f987c  57                   push edi
// 005f987d  55                   push ebp
// 005f987e  8bf0                 mov esi, eax
// 005f9880  6840420f00           push 0xf4240
// 005f9885  56                   push esi
// 005f9886  ff15e0b79800         call dword ptr [0x98b7e0]
// 005f988c  83c414               add esp, 0x14
// 005f988f  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 005f9896  eb14                 jmp 0x5f98ac
// 005f9898  50                   push eax
// 005f9899  e8020affff           call 0x5ea2a0
// 005f989e  57                   push edi
// 005f989f  8bf0                 mov esi, eax
// 005f98a1  55                   push ebp
// 005f98a2  56                   push esi
// 005f98a3  ff15d4b89800         call dword ptr [0x98b8d4]
// 005f98a9  83c410               add esp, 0x10
// 005f98ac  56                   push esi
// 005f98ad  8d4c2414             lea ecx, [esp + 0x14]
// 005f98b1  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f98b7  56                   push esi
// 005f98b8  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 005f98c3  e8d828f6ff           call 0x55c1a0
// 005f98c8  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 005f98cf  83c404               add esp, 4
// 005f98d2  8d442410             lea eax, [esp + 0x10]
// 005f98d6  50                   push eax
// 005f98d7  8bce                 mov ecx, esi
// 005f98d9  ff15f0b69800         call dword ptr [0x98b6f0]
// 005f98df  8d4c2410             lea ecx, [esp + 0x10]
// 005f98e3  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 005f98ee  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f98f4  eb24                 jmp 0x5f991a
// 005f98f6  57                   push edi
// 005f98f7  8d4c2430             lea ecx, [esp + 0x30]
// 005f98fb  55                   push ebp
// 005f98fc  51                   push ecx
// 005f98fd  ff15d4b89800         call dword ptr [0x98b8d4]
// 005f9903  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 005f990a  83c40c               add esp, 0xc
// 005f990d  8d54242c             lea edx, [esp + 0x2c]
// 005f9911  52                   push edx
// 005f9912  8bce                 mov ecx, esi
// 005f9914  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f991a  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 005f9921  5f                   pop edi
// 005f9922  8bc6                 mov eax, esi
// 005f9924  5e                   pop esi
// 005f9925  5d                   pop ebp
// 005f9926  64890d00000000       mov dword ptr fs:[0], ecx
// 005f992d  81c4d0000000         add esp, 0xd0
// 005f9933  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
