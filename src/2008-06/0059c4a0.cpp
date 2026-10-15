// roc 2008-06 0059c4a0  unit: RBX::PartInstance  size: 415 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c4a0
//
// 0059c4a0  6aff                 push -1
// 0059c4a2  6849b27d00           push 0x7db249
// 0059c4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0059c4ad  50                   push eax
// 0059c4ae  64892500000000       mov dword ptr fs:[0], esp
// 0059c4b5  83ec20               sub esp, 0x20
// 0059c4b8  53                   push ebx
// 0059c4b9  55                   push ebp
// 0059c4ba  56                   push esi
// 0059c4bb  57                   push edi
// 0059c4bc  6860ab9400           push 0x94ab60
// 0059c4c1  8bf1                 mov esi, ecx
// 0059c4c3  68f02d8300           push 0x832df0
// 0059c4c8  89742434             mov dword ptr [esp + 0x34], esi
// 0059c4cc  e8bf00fdff           call 0x56c590
// 0059c4d1  8d442427             lea eax, [esp + 0x27]
// 0059c4d5  50                   push eax
// 0059c4d6  8d54242b             lea edx, [esp + 0x2b]
// 0059c4da  33ff                 xor edi, edi
// 0059c4dc  8d4e30               lea ecx, [esi + 0x30]
// 0059c4df  52                   push edx
// 0059c4e0  897c2440             mov dword ptr [esp + 0x40], edi
// 0059c4e4  c706b82d8300         mov dword ptr [esi], 0x832db8
// 0059c4ea  e8219ceaff           call 0x446110
// 0059c4ef  8d442427             lea eax, [esp + 0x27]
// 0059c4f3  50                   push eax
// 0059c4f4  8d4c242b             lea ecx, [esp + 0x2b]
// 0059c4f8  8d6e50               lea ebp, [esi + 0x50]
// 0059c4fb  51                   push ecx
// 0059c4fc  8bcd                 mov ecx, ebp
// 0059c4fe  c644244001           mov byte ptr [esp + 0x40], 1
// 0059c503  e8089ceaff           call 0x446110
// 0059c508  6a04                 push 4
// 0059c50a  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0059c50f  8d5e70               lea ebx, [esi + 0x70]
// 0059c512  e809441000           call 0x6a0920
// 0059c517  83c404               add esp, 4
// 0059c51a  3bc7                 cmp eax, edi
// 0059c51c  7404                 je 0x59c522
// 0059c51e  8918                 mov dword ptr [eax], ebx
// 0059c520  eb02                 jmp 0x59c524
// 0059c522  33c0                 xor eax, eax
// 0059c524  8903                 mov dword ptr [ebx], eax
// 0059c526  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059c529  897b10               mov dword ptr [ebx + 0x10], edi
// 0059c52c  897b14               mov dword ptr [ebx + 0x14], edi
// 0059c52f  6a04                 push 4
// 0059c531  c644243c04           mov byte ptr [esp + 0x3c], 4
// 0059c536  8d9e88000000         lea ebx, [esi + 0x88]
// 0059c53c  e8df431000           call 0x6a0920
// 0059c541  83c404               add esp, 4
// 0059c544  3bc7                 cmp eax, edi
// 0059c546  7404                 je 0x59c54c
// 0059c548  8918                 mov dword ptr [eax], ebx
// 0059c54a  eb02                 jmp 0x59c54e
// 0059c54c  33c0                 xor eax, eax
// 0059c54e  8903                 mov dword ptr [ebx], eax
// 0059c550  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059c553  897b10               mov dword ptr [ebx + 0x10], edi
// 0059c556  897b14               mov dword ptr [ebx + 0x14], edi
// 0059c559  6a04                 push 4
// 0059c55b  c644243c06           mov byte ptr [esp + 0x3c], 6
// 0059c560  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0059c566  e8b5431000           call 0x6a0920
// 0059c56b  83c404               add esp, 4
// 0059c56e  3bc7                 cmp eax, edi
// 0059c570  7404                 je 0x59c576
// 0059c572  8918                 mov dword ptr [eax], ebx
// 0059c574  eb02                 jmp 0x59c578
// 0059c576  33c0                 xor eax, eax
// 0059c578  8903                 mov dword ptr [ebx], eax
// 0059c57a  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059c57d  897b10               mov dword ptr [ebx + 0x10], edi
// 0059c580  897b14               mov dword ptr [ebx + 0x14], edi
// 0059c583  6a04                 push 4
// 0059c585  c644243c08           mov byte ptr [esp + 0x3c], 8
// 0059c58a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0059c590  e88b431000           call 0x6a0920
// 0059c595  83c404               add esp, 4
// 0059c598  3bc7                 cmp eax, edi
// 0059c59a  7404                 je 0x59c5a0
// 0059c59c  8918                 mov dword ptr [eax], ebx
// 0059c59e  eb02                 jmp 0x59c5a2
// 0059c5a0  33c0                 xor eax, eax
// 0059c5a2  8903                 mov dword ptr [ebx], eax
// 0059c5a4  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059c5a7  897b10               mov dword ptr [ebx + 0x10], edi
// 0059c5aa  897b14               mov dword ptr [ebx + 0x14], edi
// 0059c5ad  6a04                 push 4
// 0059c5af  c644243c0a           mov byte ptr [esp + 0x3c], 0xa
// 0059c5b4  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0059c5ba  e861431000           call 0x6a0920
// 0059c5bf  83c404               add esp, 4
// 0059c5c2  3bc7                 cmp eax, edi
// 0059c5c4  7404                 je 0x59c5ca
// 0059c5c6  8918                 mov dword ptr [eax], ebx
// 0059c5c8  eb02                 jmp 0x59c5cc
// 0059c5ca  33c0                 xor eax, eax
// 0059c5cc  8903                 mov dword ptr [ebx], eax
// 0059c5ce  897b0c               mov dword ptr [ebx + 0xc], edi
// 0059c5d1  897b10               mov dword ptr [ebx + 0x10], edi
// 0059c5d4  897b14               mov dword ptr [ebx + 0x14], edi
// 0059c5d7  68e42d8300           push 0x832de4
// 0059c5dc  57                   push edi
// 0059c5dd  8bce                 mov ecx, esi
// 0059c5df  c64424400c           mov byte ptr [esp + 0x40], 0xc
// 0059c5e4  e8470f0b00           call 0x64d530
// 0059c5e9  68dc2d8300           push 0x832ddc
// 0059c5ee  6a01                 push 1
// 0059c5f0  8bce                 mov ecx, esi
// 0059c5f2  e8390f0b00           call 0x64d530
// 0059c5f7  68d42d8300           push 0x832dd4
// 0059c5fc  6a02                 push 2
// 0059c5fe  8bce                 mov ecx, esi
// 0059c600  e82b0f0b00           call 0x64d530
// 0059c605  6aff                 push -1
// 0059c607  68cc2d8300           push 0x832dcc
// 0059c60c  e87f79fbff           call 0x553f90
// 0059c611  83c408               add esp, 8
// 0059c614  8d542428             lea edx, [esp + 0x28]
// 0059c618  52                   push edx
// 0059c619  8bcd                 mov ecx, ebp
// 0059c61b  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059c61f  e87c7efcff           call 0x5644a0
// 0059c624  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059c628  5f                   pop edi
// 0059c629  c70001000000         mov dword ptr [eax], 1
// 0059c62f  8bc6                 mov eax, esi
// 0059c631  5e                   pop esi
// 0059c632  5d                   pop ebp
// 0059c633  5b                   pop ebx
// 0059c634  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c63b  83c42c               add esp, 0x2c
// 0059c63e  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4FormFactor@PartInstance@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
