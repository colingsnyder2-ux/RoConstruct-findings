// roc 2008-06 00615280  unit: RBX::RevoluteLink  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615280
//
// 00615280  6aff                 push -1
// 00615282  68c98e7d00           push 0x7d8ec9
// 00615287  64a100000000         mov eax, dword ptr fs:[0]
// 0061528d  50                   push eax
// 0061528e  64892500000000       mov dword ptr fs:[0], esp
// 00615295  83ec1c               sub esp, 0x1c
// 00615298  53                   push ebx
// 00615299  56                   push esi
// 0061529a  57                   push edi
// 0061529b  68cca89500           push 0x95a8cc
// 006152a0  8bf1                 mov esi, ecx
// 006152a2  68b4398400           push 0x8439b4
// 006152a7  8974242c             mov dword ptr [esp + 0x2c], esi
// 006152ab  e8e072f5ff           call 0x56c590
// 006152b0  8d442423             lea eax, [esp + 0x23]
// 006152b4  50                   push eax
// 006152b5  8d542427             lea edx, [esp + 0x27]
// 006152b9  33ff                 xor edi, edi
// 006152bb  8d4e30               lea ecx, [esi + 0x30]
// 006152be  52                   push edx
// 006152bf  897c2438             mov dword ptr [esp + 0x38], edi
// 006152c3  c706ac288400         mov dword ptr [esi], 0x8428ac
// 006152c9  e8420ee3ff           call 0x446110
// 006152ce  8d442423             lea eax, [esp + 0x23]
// 006152d2  50                   push eax
// 006152d3  8d542427             lea edx, [esp + 0x27]
// 006152d7  8d4e50               lea ecx, [esi + 0x50]
// 006152da  52                   push edx
// 006152db  c644243801           mov byte ptr [esp + 0x38], 1
// 006152e0  e82b0ee3ff           call 0x446110
// 006152e5  6a04                 push 4
// 006152e7  c644243402           mov byte ptr [esp + 0x34], 2
// 006152ec  8d5e70               lea ebx, [esi + 0x70]
// 006152ef  e82cb60800           call 0x6a0920
// 006152f4  83c404               add esp, 4
// 006152f7  3bc7                 cmp eax, edi
// 006152f9  7404                 je 0x6152ff
// 006152fb  8918                 mov dword ptr [eax], ebx
// 006152fd  eb02                 jmp 0x615301
// 006152ff  33c0                 xor eax, eax
// 00615301  8903                 mov dword ptr [ebx], eax
// 00615303  897b0c               mov dword ptr [ebx + 0xc], edi
// 00615306  897b10               mov dword ptr [ebx + 0x10], edi
// 00615309  897b14               mov dword ptr [ebx + 0x14], edi
// 0061530c  6a04                 push 4
// 0061530e  c644243404           mov byte ptr [esp + 0x34], 4
// 00615313  8d9e88000000         lea ebx, [esi + 0x88]
// 00615319  e802b60800           call 0x6a0920
// 0061531e  83c404               add esp, 4
// 00615321  3bc7                 cmp eax, edi
// 00615323  7404                 je 0x615329
// 00615325  8918                 mov dword ptr [eax], ebx
// 00615327  eb02                 jmp 0x61532b
// 00615329  33c0                 xor eax, eax
// 0061532b  8903                 mov dword ptr [ebx], eax
// 0061532d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00615330  897b10               mov dword ptr [ebx + 0x10], edi
// 00615333  897b14               mov dword ptr [ebx + 0x14], edi
// 00615336  6a04                 push 4
// 00615338  c644243406           mov byte ptr [esp + 0x34], 6
// 0061533d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00615343  e8d8b50800           call 0x6a0920
// 00615348  83c404               add esp, 4
// 0061534b  3bc7                 cmp eax, edi
// 0061534d  7404                 je 0x615353
// 0061534f  8918                 mov dword ptr [eax], ebx
// 00615351  eb02                 jmp 0x615355
// 00615353  33c0                 xor eax, eax
// 00615355  8903                 mov dword ptr [ebx], eax
// 00615357  897b0c               mov dword ptr [ebx + 0xc], edi
// 0061535a  897b10               mov dword ptr [ebx + 0x10], edi
// 0061535d  897b14               mov dword ptr [ebx + 0x14], edi
// 00615360  6a04                 push 4
// 00615362  c644243408           mov byte ptr [esp + 0x34], 8
// 00615367  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0061536d  e8aeb50800           call 0x6a0920
// 00615372  83c404               add esp, 4
// 00615375  3bc7                 cmp eax, edi
// 00615377  7404                 je 0x61537d
// 00615379  8918                 mov dword ptr [eax], ebx
// 0061537b  eb02                 jmp 0x61537f
// 0061537d  33c0                 xor eax, eax
// 0061537f  8903                 mov dword ptr [ebx], eax
// 00615381  897b0c               mov dword ptr [ebx + 0xc], edi
// 00615384  897b10               mov dword ptr [ebx + 0x10], edi
// 00615387  897b14               mov dword ptr [ebx + 0x14], edi
// 0061538a  6a04                 push 4
// 0061538c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00615391  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00615397  e884b50800           call 0x6a0920
// 0061539c  83c404               add esp, 4
// 0061539f  3bc7                 cmp eax, edi
// 006153a1  7404                 je 0x6153a7
// 006153a3  8918                 mov dword ptr [eax], ebx
// 006153a5  eb02                 jmp 0x6153a9
// 006153a7  33c0                 xor eax, eax
// 006153a9  8903                 mov dword ptr [ebx], eax
// 006153ab  897b0c               mov dword ptr [ebx + 0xc], edi
// 006153ae  897b10               mov dword ptr [ebx + 0x10], edi
// 006153b1  897b14               mov dword ptr [ebx + 0x14], edi
// 006153b4  68ac398400           push 0x8439ac
// 006153b9  6a07                 push 7
// 006153bb  8bce                 mov ecx, esi
// 006153bd  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 006153c2  e869810300           call 0x64d530
// 006153c7  689c398400           push 0x84399c
// 006153cc  6a01                 push 1
// 006153ce  8bce                 mov ecx, esi
// 006153d0  e85b810300           call 0x64d530
// 006153d5  688c398400           push 0x84398c
// 006153da  6a02                 push 2
// 006153dc  8bce                 mov ecx, esi
// 006153de  e84d810300           call 0x64d530
// 006153e3  6884398400           push 0x843984
// 006153e8  6a03                 push 3
// 006153ea  8bce                 mov ecx, esi
// 006153ec  e83f810300           call 0x64d530
// 006153f1  687c398400           push 0x84397c
// 006153f6  6a04                 push 4
// 006153f8  8bce                 mov ecx, esi
// 006153fa  e831810300           call 0x64d530
// 006153ff  6874398400           push 0x843974
// 00615404  6a05                 push 5
// 00615406  8bce                 mov ecx, esi
// 00615408  e823810300           call 0x64d530
// 0061540d  686c398400           push 0x84396c
// 00615412  6a06                 push 6
// 00615414  8bce                 mov ecx, esi
// 00615416  e815810300           call 0x64d530
// 0061541b  68145f8100           push 0x815f14
// 00615420  57                   push edi
// 00615421  8bce                 mov ecx, esi
// 00615423  e808810300           call 0x64d530
// 00615428  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061542c  5f                   pop edi
// 0061542d  8bc6                 mov eax, esi
// 0061542f  5e                   pop esi
// 00615430  5b                   pop ebx
// 00615431  64890d00000000       mov dword ptr fs:[0], ecx
// 00615438  83c428               add esp, 0x28
// 0061543b  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4ControllerType@Controller@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
