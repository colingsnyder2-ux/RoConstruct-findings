// from server: 100% by auto
// roc 2009-06 00579260  unit: G3D::LineSegment  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579260
//
// 00579260  6aff                 push -1
// 00579262  68cc088600           push 0x8608cc
// 00579267  64a100000000         mov eax, dword ptr fs:[0]
// 0057926d  50                   push eax
// 0057926e  64892500000000       mov dword ptr fs:[0], esp
// 00579275  81ecc4000000         sub esp, 0xc4
// 0057927b  55                   push ebp
// 0057927c  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00579283  56                   push esi
// 00579284  57                   push edi
// 00579285  8bbc24e8000000       mov edi, dword ptr [esp + 0xe8]
// 0057928c  57                   push edi
// 0057928d  55                   push ebp
// 0057928e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00579296  ff1548e88900         call dword ptr [0x89e848]
// 0057929c  40                   inc eax
// 0057929d  83c408               add esp, 8
// 005792a0  3da1000000           cmp eax, 0xa1
// 005792a5  0f8e8b000000         jle 0x579336
// 005792ab  3d40420f00           cmp eax, 0xf4240
// 005792b0  7d26                 jge 0x5792d8
// 005792b2  6841420f00           push 0xf4241
// 005792b7  e8841effff           call 0x56b140
// 005792bc  57                   push edi
// 005792bd  55                   push ebp
// 005792be  8bf0                 mov esi, eax
// 005792c0  6840420f00           push 0xf4240
// 005792c5  56                   push esi
// 005792c6  ff15b0e88900         call dword ptr [0x89e8b0]
// 005792cc  83c414               add esp, 0x14
// 005792cf  c68640420f0000       mov byte ptr [esi + 0xf4240], 0
// 005792d6  eb14                 jmp 0x5792ec
// 005792d8  50                   push eax
// 005792d9  e8621effff           call 0x56b140
// 005792de  57                   push edi
// 005792df  8bf0                 mov esi, eax
// 005792e1  55                   push ebp
// 005792e2  56                   push esi
// 005792e3  ff154ce88900         call dword ptr [0x89e84c]
// 005792e9  83c410               add esp, 0x10
// 005792ec  56                   push esi
// 005792ed  8d4c2414             lea ecx, [esp + 0x14]
// 005792f1  ff15b4e48900         call dword ptr [0x89e4b4]
// 005792f7  56                   push esi
// 005792f8  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00579303  e8581effff           call 0x56b160
// 00579308  8bb424e4000000       mov esi, dword ptr [esp + 0xe4]
// 0057930f  83c404               add esp, 4
// 00579312  8d442410             lea eax, [esp + 0x10]
// 00579316  50                   push eax
// 00579317  8bce                 mov ecx, esi
// 00579319  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057931f  8d4c2410             lea ecx, [esp + 0x10]
// 00579323  c78424d8000000ffffffff mov dword ptr [esp + 0xd8], 0xffffffff
// 0057932e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00579334  eb24                 jmp 0x57935a
// 00579336  57                   push edi
// 00579337  8d4c2430             lea ecx, [esp + 0x30]
// 0057933b  55                   push ebp
// 0057933c  51                   push ecx
// 0057933d  ff154ce88900         call dword ptr [0x89e84c]
// 00579343  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 0057934a  83c40c               add esp, 0xc
// 0057934d  8d54242c             lea edx, [esp + 0x2c]
// 00579351  52                   push edx
// 00579352  8bce                 mov ecx, esi
// 00579354  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057935a  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00579361  5f                   pop edi
// 00579362  8bc6                 mov eax, esi
// 00579364  5e                   pop esi
// 00579365  5d                   pop ebp
// 00579366  64890d00000000       mov dword ptr fs:[0], ecx
// 0057936d  81c4d0000000         add esp, 0xd0
// 00579373  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?vformat@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
