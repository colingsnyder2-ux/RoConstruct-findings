// roc 2012-06 0072b550  unit: RBX::Workspace  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072b550
//
// 0072b550  6aff                 push -1
// 0072b552  68e501ac00           push 0xac01e5
// 0072b557  64a100000000         mov eax, dword ptr fs:[0]
// 0072b55d  50                   push eax
// 0072b55e  64892500000000       mov dword ptr fs:[0], esp
// 0072b565  81ec84000000         sub esp, 0x84
// 0072b56b  56                   push esi
// 0072b56c  c744240400000000     mov dword ptr [esp + 4], 0
// 0072b574  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0072b57b  57                   push edi
// 0072b57c  8bf9                 mov edi, ecx
// 0072b57e  85f6                 test esi, esi
// 0072b580  0f8ec8000000         jle 0x72b64e
// 0072b586  8b07                 mov eax, dword ptr [edi]
// 0072b588  83c004               add eax, 4
// 0072b58b  50                   push eax
// 0072b58c  8d4c2418             lea ecx, [esp + 0x18]
// 0072b590  ff154426b200         call dword ptr [0xb22644]
// 0072b596  83fe20               cmp esi, 0x20
// 0072b599  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072b59d  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0072b5a8  c744241020000000     mov dword ptr [esp + 0x10], 0x20
// 0072b5b0  8944240c             mov dword ptr [esp + 0xc], eax
// 0072b5b4  c744240803000000     mov dword ptr [esp + 8], 3
// 0072b5bc  8d4c2410             lea ecx, [esp + 0x10]
// 0072b5c0  7f07                 jg 0x72b5c9
// 0072b5c2  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0072b5c9  83f803               cmp eax, 3
// 0072b5cc  8d44240c             lea eax, [esp + 0xc]
// 0072b5d0  7204                 jb 0x72b5d6
// 0072b5d2  8d442408             lea eax, [esp + 8]
// 0072b5d6  8b09                 mov ecx, dword ptr [ecx]
// 0072b5d8  8b10                 mov edx, dword ptr [eax]
// 0072b5da  51                   push ecx
// 0072b5db  52                   push edx
// 0072b5dc  8d442438             lea eax, [esp + 0x38]
// 0072b5e0  50                   push eax
// 0072b5e1  8d4c2420             lea ecx, [esp + 0x20]
// 0072b5e5  ff15e826b200         call dword ptr [0xb226e8]
// 0072b5eb  50                   push eax
// 0072b5ec  8d4c2418             lea ecx, [esp + 0x18]
// 0072b5f0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0072b5f8  ff155826b200         call dword ptr [0xb22658]
// 0072b5fe  8d4c2430             lea ecx, [esp + 0x30]
// 0072b602  c684249400000000     mov byte ptr [esp + 0x94], 0
// 0072b60a  ff153c26b200         call dword ptr [0xb2263c]
// 0072b610  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 0072b615  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072b619  7304                 jae 0x72b61f
// 0072b61b  8d442418             lea eax, [esp + 0x18]
// 0072b61f  8b4f04               mov ecx, dword ptr [edi + 4]
// 0072b622  51                   push ecx
// 0072b623  50                   push eax
// 0072b624  8d542454             lea edx, [esp + 0x54]
// 0072b628  68885aba00           push 0xba5a88
// 0072b62d  52                   push edx
// 0072b62e  ff15402ab200         call dword ptr [0xb22a40]
// 0072b634  83c410               add esp, 0x10
// 0072b637  8d4c2414             lea ecx, [esp + 0x14]
// 0072b63b  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 0072b646  ff153c26b200         call dword ptr [0xb2263c]
// 0072b64c  eb17                 jmp 0x72b665
// 0072b64e  8b4704               mov eax, dword ptr [edi + 4]
// 0072b651  50                   push eax
// 0072b652  8d4c2450             lea ecx, [esp + 0x50]
// 0072b656  689c0db500           push 0xb50d9c
// 0072b65b  51                   push ecx
// 0072b65c  ff15402ab200         call dword ptr [0xb22a40]
// 0072b662  83c40c               add esp, 0xc
// 0072b665  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 0072b66c  8d54244c             lea edx, [esp + 0x4c]
// 0072b670  52                   push edx
// 0072b671  8bce                 mov ecx, esi
// 0072b673  ff154826b200         call dword ptr [0xb22648]
// 0072b679  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0072b680  5f                   pop edi
// 0072b681  8bc6                 mov eax, esi
// 0072b683  5e                   pop esi
// 0072b684  64890d00000000       mov dword ptr fs:[0], ecx
// 0072b68b  81c490000000         add esp, 0x90
// 0072b691  c20800               ret 8
// library openrbx-client/App\util\Guid.cpp (function ?readableString@Data@Guid@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
