// roc 2008-06 0060b350  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b350
//
// 0060b350  6aff                 push -1
// 0060b352  68c98e7d00           push 0x7d8ec9
// 0060b357  64a100000000         mov eax, dword ptr fs:[0]
// 0060b35d  50                   push eax
// 0060b35e  64892500000000       mov dword ptr fs:[0], esp
// 0060b365  83ec1c               sub esp, 0x1c
// 0060b368  53                   push ebx
// 0060b369  56                   push esi
// 0060b36a  57                   push edi
// 0060b36b  68f4a39500           push 0x95a3f4
// 0060b370  8bf1                 mov esi, ecx
// 0060b372  68902f8400           push 0x842f90
// 0060b377  8974242c             mov dword ptr [esp + 0x2c], esi
// 0060b37b  e81012f6ff           call 0x56c590
// 0060b380  8d442423             lea eax, [esp + 0x23]
// 0060b384  50                   push eax
// 0060b385  8d542427             lea edx, [esp + 0x27]
// 0060b389  33ff                 xor edi, edi
// 0060b38b  8d4e30               lea ecx, [esi + 0x30]
// 0060b38e  52                   push edx
// 0060b38f  897c2438             mov dword ptr [esp + 0x38], edi
// 0060b393  c706682f8400         mov dword ptr [esi], 0x842f68
// 0060b399  e872ade3ff           call 0x446110
// 0060b39e  8d442423             lea eax, [esp + 0x23]
// 0060b3a2  50                   push eax
// 0060b3a3  8d542427             lea edx, [esp + 0x27]
// 0060b3a7  8d4e50               lea ecx, [esi + 0x50]
// 0060b3aa  52                   push edx
// 0060b3ab  c644243801           mov byte ptr [esp + 0x38], 1
// 0060b3b0  e85bade3ff           call 0x446110
// 0060b3b5  6a04                 push 4
// 0060b3b7  c644243402           mov byte ptr [esp + 0x34], 2
// 0060b3bc  8d5e70               lea ebx, [esi + 0x70]
// 0060b3bf  e85c550900           call 0x6a0920
// 0060b3c4  83c404               add esp, 4
// 0060b3c7  3bc7                 cmp eax, edi
// 0060b3c9  7404                 je 0x60b3cf
// 0060b3cb  8918                 mov dword ptr [eax], ebx
// 0060b3cd  eb02                 jmp 0x60b3d1
// 0060b3cf  33c0                 xor eax, eax
// 0060b3d1  8903                 mov dword ptr [ebx], eax
// 0060b3d3  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b3d6  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b3d9  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b3dc  6a04                 push 4
// 0060b3de  c644243404           mov byte ptr [esp + 0x34], 4
// 0060b3e3  8d9e88000000         lea ebx, [esi + 0x88]
// 0060b3e9  e832550900           call 0x6a0920
// 0060b3ee  83c404               add esp, 4
// 0060b3f1  3bc7                 cmp eax, edi
// 0060b3f3  7404                 je 0x60b3f9
// 0060b3f5  8918                 mov dword ptr [eax], ebx
// 0060b3f7  eb02                 jmp 0x60b3fb
// 0060b3f9  33c0                 xor eax, eax
// 0060b3fb  8903                 mov dword ptr [ebx], eax
// 0060b3fd  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b400  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b403  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b406  6a04                 push 4
// 0060b408  c644243406           mov byte ptr [esp + 0x34], 6
// 0060b40d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0060b413  e808550900           call 0x6a0920
// 0060b418  83c404               add esp, 4
// 0060b41b  3bc7                 cmp eax, edi
// 0060b41d  7404                 je 0x60b423
// 0060b41f  8918                 mov dword ptr [eax], ebx
// 0060b421  eb02                 jmp 0x60b425
// 0060b423  33c0                 xor eax, eax
// 0060b425  8903                 mov dword ptr [ebx], eax
// 0060b427  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b42a  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b42d  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b430  6a04                 push 4
// 0060b432  c644243408           mov byte ptr [esp + 0x34], 8
// 0060b437  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0060b43d  e8de540900           call 0x6a0920
// 0060b442  83c404               add esp, 4
// 0060b445  3bc7                 cmp eax, edi
// 0060b447  7404                 je 0x60b44d
// 0060b449  8918                 mov dword ptr [eax], ebx
// 0060b44b  eb02                 jmp 0x60b44f
// 0060b44d  33c0                 xor eax, eax
// 0060b44f  8903                 mov dword ptr [ebx], eax
// 0060b451  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b454  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b457  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b45a  6a04                 push 4
// 0060b45c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 0060b461  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0060b467  e8b4540900           call 0x6a0920
// 0060b46c  83c404               add esp, 4
// 0060b46f  3bc7                 cmp eax, edi
// 0060b471  7404                 je 0x60b477
// 0060b473  8918                 mov dword ptr [eax], ebx
// 0060b475  eb02                 jmp 0x60b479
// 0060b477  33c0                 xor eax, eax
// 0060b479  8903                 mov dword ptr [ebx], eax
// 0060b47b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b47e  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b481  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b484  68fce48100           push 0x81e4fc
// 0060b489  57                   push edi
// 0060b48a  8bce                 mov ecx, esi
// 0060b48c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 0060b491  e89a200400           call 0x64d530
// 0060b496  687c2f8400           push 0x842f7c
// 0060b49b  6a01                 push 1
// 0060b49d  8bce                 mov ecx, esi
// 0060b49f  e88c200400           call 0x64d530
// 0060b4a4  6878f78200           push 0x82f778
// 0060b4a9  6a02                 push 2
// 0060b4ab  8bce                 mov ecx, esi
// 0060b4ad  e87e200400           call 0x64d530
// 0060b4b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060b4b6  5f                   pop edi
// 0060b4b7  8bc6                 mov eax, esi
// 0060b4b9  5e                   pop esi
// 0060b4ba  5b                   pop ebx
// 0060b4bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b4c2  83c428               add esp, 0x28
// 0060b4c5  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4LeftRight@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
