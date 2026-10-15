// roc 2008-06 004aa2c0  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa2c0
//
// 004aa2c0  6aff                 push -1
// 004aa2c2  68c98e7d00           push 0x7d8ec9
// 004aa2c7  64a100000000         mov eax, dword ptr fs:[0]
// 004aa2cd  50                   push eax
// 004aa2ce  64892500000000       mov dword ptr fs:[0], esp
// 004aa2d5  83ec1c               sub esp, 0x1c
// 004aa2d8  53                   push ebx
// 004aa2d9  56                   push esi
// 004aa2da  57                   push edi
// 004aa2db  6818a99300           push 0x93a918
// 004aa2e0  8bf1                 mov esi, ecx
// 004aa2e2  6818418200           push 0x824118
// 004aa2e7  8974242c             mov dword ptr [esp + 0x2c], esi
// 004aa2eb  e8a0220c00           call 0x56c590
// 004aa2f0  8d442423             lea eax, [esp + 0x23]
// 004aa2f4  50                   push eax
// 004aa2f5  8d542427             lea edx, [esp + 0x27]
// 004aa2f9  33ff                 xor edi, edi
// 004aa2fb  8d4e30               lea ecx, [esi + 0x30]
// 004aa2fe  52                   push edx
// 004aa2ff  897c2438             mov dword ptr [esp + 0x38], edi
// 004aa303  c706c4408200         mov dword ptr [esi], 0x8240c4
// 004aa309  e802bef9ff           call 0x446110
// 004aa30e  8d442423             lea eax, [esp + 0x23]
// 004aa312  50                   push eax
// 004aa313  8d542427             lea edx, [esp + 0x27]
// 004aa317  8d4e50               lea ecx, [esi + 0x50]
// 004aa31a  52                   push edx
// 004aa31b  c644243801           mov byte ptr [esp + 0x38], 1
// 004aa320  e8ebbdf9ff           call 0x446110
// 004aa325  6a04                 push 4
// 004aa327  c644243402           mov byte ptr [esp + 0x34], 2
// 004aa32c  8d5e70               lea ebx, [esi + 0x70]
// 004aa32f  e8ec651f00           call 0x6a0920
// 004aa334  83c404               add esp, 4
// 004aa337  3bc7                 cmp eax, edi
// 004aa339  7404                 je 0x4aa33f
// 004aa33b  8918                 mov dword ptr [eax], ebx
// 004aa33d  eb02                 jmp 0x4aa341
// 004aa33f  33c0                 xor eax, eax
// 004aa341  8903                 mov dword ptr [ebx], eax
// 004aa343  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa346  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa349  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa34c  6a04                 push 4
// 004aa34e  c644243404           mov byte ptr [esp + 0x34], 4
// 004aa353  8d9e88000000         lea ebx, [esi + 0x88]
// 004aa359  e8c2651f00           call 0x6a0920
// 004aa35e  83c404               add esp, 4
// 004aa361  3bc7                 cmp eax, edi
// 004aa363  7404                 je 0x4aa369
// 004aa365  8918                 mov dword ptr [eax], ebx
// 004aa367  eb02                 jmp 0x4aa36b
// 004aa369  33c0                 xor eax, eax
// 004aa36b  8903                 mov dword ptr [ebx], eax
// 004aa36d  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa370  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa373  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa376  6a04                 push 4
// 004aa378  c644243406           mov byte ptr [esp + 0x34], 6
// 004aa37d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 004aa383  e898651f00           call 0x6a0920
// 004aa388  83c404               add esp, 4
// 004aa38b  3bc7                 cmp eax, edi
// 004aa38d  7404                 je 0x4aa393
// 004aa38f  8918                 mov dword ptr [eax], ebx
// 004aa391  eb02                 jmp 0x4aa395
// 004aa393  33c0                 xor eax, eax
// 004aa395  8903                 mov dword ptr [ebx], eax
// 004aa397  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa39a  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa39d  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa3a0  6a04                 push 4
// 004aa3a2  c644243408           mov byte ptr [esp + 0x34], 8
// 004aa3a7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 004aa3ad  e86e651f00           call 0x6a0920
// 004aa3b2  83c404               add esp, 4
// 004aa3b5  3bc7                 cmp eax, edi
// 004aa3b7  7404                 je 0x4aa3bd
// 004aa3b9  8918                 mov dword ptr [eax], ebx
// 004aa3bb  eb02                 jmp 0x4aa3bf
// 004aa3bd  33c0                 xor eax, eax
// 004aa3bf  8903                 mov dword ptr [ebx], eax
// 004aa3c1  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa3c4  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa3c7  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa3ca  6a04                 push 4
// 004aa3cc  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 004aa3d1  8d9ed0000000         lea ebx, [esi + 0xd0]
// 004aa3d7  e844651f00           call 0x6a0920
// 004aa3dc  83c404               add esp, 4
// 004aa3df  3bc7                 cmp eax, edi
// 004aa3e1  7404                 je 0x4aa3e7
// 004aa3e3  8918                 mov dword ptr [eax], ebx
// 004aa3e5  eb02                 jmp 0x4aa3e9
// 004aa3e7  33c0                 xor eax, eax
// 004aa3e9  8903                 mov dword ptr [ebx], eax
// 004aa3eb  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa3ee  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa3f1  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa3f4  6810418200           push 0x824110
// 004aa3f9  57                   push edi
// 004aa3fa  8bce                 mov ecx, esi
// 004aa3fc  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 004aa401  e82a311a00           call 0x64d530
// 004aa406  6800418200           push 0x824100
// 004aa40b  6a01                 push 1
// 004aa40d  8bce                 mov ecx, esi
// 004aa40f  e81c311a00           call 0x64d530
// 004aa414  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004aa418  5f                   pop edi
// 004aa419  8bc6                 mov eax, esi
// 004aa41b  5e                   pop esi
// 004aa41c  5b                   pop ebx
// 004aa41d  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa424  83c428               add esp, 0x28
// 004aa427  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4PhysicsReceiveMethod@NetworkSettings@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
