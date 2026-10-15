// roc 2008-06 0060b1d0  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b1d0
//
// 0060b1d0  6aff                 push -1
// 0060b1d2  68c98e7d00           push 0x7d8ec9
// 0060b1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0060b1dd  50                   push eax
// 0060b1de  64892500000000       mov dword ptr fs:[0], esp
// 0060b1e5  83ec1c               sub esp, 0x1c
// 0060b1e8  53                   push ebx
// 0060b1e9  56                   push esi
// 0060b1ea  57                   push edi
// 0060b1eb  68cca39500           push 0x95a3cc
// 0060b1f0  8bf1                 mov esi, ecx
// 0060b1f2  68842f8400           push 0x842f84
// 0060b1f7  8974242c             mov dword ptr [esp + 0x2c], esi
// 0060b1fb  e89013f6ff           call 0x56c590
// 0060b200  8d442423             lea eax, [esp + 0x23]
// 0060b204  50                   push eax
// 0060b205  8d542427             lea edx, [esp + 0x27]
// 0060b209  33ff                 xor edi, edi
// 0060b20b  8d4e30               lea ecx, [esi + 0x30]
// 0060b20e  52                   push edx
// 0060b20f  897c2438             mov dword ptr [esp + 0x38], edi
// 0060b213  c7065c2f8400         mov dword ptr [esi], 0x842f5c
// 0060b219  e8f2aee3ff           call 0x446110
// 0060b21e  8d442423             lea eax, [esp + 0x23]
// 0060b222  50                   push eax
// 0060b223  8d542427             lea edx, [esp + 0x27]
// 0060b227  8d4e50               lea ecx, [esi + 0x50]
// 0060b22a  52                   push edx
// 0060b22b  c644243801           mov byte ptr [esp + 0x38], 1
// 0060b230  e8dbaee3ff           call 0x446110
// 0060b235  6a04                 push 4
// 0060b237  c644243402           mov byte ptr [esp + 0x34], 2
// 0060b23c  8d5e70               lea ebx, [esi + 0x70]
// 0060b23f  e8dc560900           call 0x6a0920
// 0060b244  83c404               add esp, 4
// 0060b247  3bc7                 cmp eax, edi
// 0060b249  7404                 je 0x60b24f
// 0060b24b  8918                 mov dword ptr [eax], ebx
// 0060b24d  eb02                 jmp 0x60b251
// 0060b24f  33c0                 xor eax, eax
// 0060b251  8903                 mov dword ptr [ebx], eax
// 0060b253  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b256  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b259  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b25c  6a04                 push 4
// 0060b25e  c644243404           mov byte ptr [esp + 0x34], 4
// 0060b263  8d9e88000000         lea ebx, [esi + 0x88]
// 0060b269  e8b2560900           call 0x6a0920
// 0060b26e  83c404               add esp, 4
// 0060b271  3bc7                 cmp eax, edi
// 0060b273  7404                 je 0x60b279
// 0060b275  8918                 mov dword ptr [eax], ebx
// 0060b277  eb02                 jmp 0x60b27b
// 0060b279  33c0                 xor eax, eax
// 0060b27b  8903                 mov dword ptr [ebx], eax
// 0060b27d  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b280  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b283  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b286  6a04                 push 4
// 0060b288  c644243406           mov byte ptr [esp + 0x34], 6
// 0060b28d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0060b293  e888560900           call 0x6a0920
// 0060b298  83c404               add esp, 4
// 0060b29b  3bc7                 cmp eax, edi
// 0060b29d  7404                 je 0x60b2a3
// 0060b29f  8918                 mov dword ptr [eax], ebx
// 0060b2a1  eb02                 jmp 0x60b2a5
// 0060b2a3  33c0                 xor eax, eax
// 0060b2a5  8903                 mov dword ptr [ebx], eax
// 0060b2a7  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b2aa  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b2ad  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b2b0  6a04                 push 4
// 0060b2b2  c644243408           mov byte ptr [esp + 0x34], 8
// 0060b2b7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0060b2bd  e85e560900           call 0x6a0920
// 0060b2c2  83c404               add esp, 4
// 0060b2c5  3bc7                 cmp eax, edi
// 0060b2c7  7404                 je 0x60b2cd
// 0060b2c9  8918                 mov dword ptr [eax], ebx
// 0060b2cb  eb02                 jmp 0x60b2cf
// 0060b2cd  33c0                 xor eax, eax
// 0060b2cf  8903                 mov dword ptr [ebx], eax
// 0060b2d1  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b2d4  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b2d7  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b2da  6a04                 push 4
// 0060b2dc  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 0060b2e1  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0060b2e7  e834560900           call 0x6a0920
// 0060b2ec  83c404               add esp, 4
// 0060b2ef  3bc7                 cmp eax, edi
// 0060b2f1  7404                 je 0x60b2f7
// 0060b2f3  8918                 mov dword ptr [eax], ebx
// 0060b2f5  eb02                 jmp 0x60b2f9
// 0060b2f7  33c0                 xor eax, eax
// 0060b2f9  8903                 mov dword ptr [ebx], eax
// 0060b2fb  897b0c               mov dword ptr [ebx + 0xc], edi
// 0060b2fe  897b10               mov dword ptr [ebx + 0x10], edi
// 0060b301  897b14               mov dword ptr [ebx + 0x14], edi
// 0060b304  6804e58100           push 0x81e504
// 0060b309  57                   push edi
// 0060b30a  8bce                 mov ecx, esi
// 0060b30c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 0060b311  e81a220400           call 0x64d530
// 0060b316  687c2f8400           push 0x842f7c
// 0060b31b  6a01                 push 1
// 0060b31d  8bce                 mov ecx, esi
// 0060b31f  e80c220400           call 0x64d530
// 0060b324  6890f78200           push 0x82f790
// 0060b329  6a02                 push 2
// 0060b32b  8bce                 mov ecx, esi
// 0060b32d  e8fe210400           call 0x64d530
// 0060b332  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060b336  5f                   pop edi
// 0060b337  8bc6                 mov eax, esi
// 0060b339  5e                   pop esi
// 0060b33a  5b                   pop ebx
// 0060b33b  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b342  83c428               add esp, 0x28
// 0060b345  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4TopBottom@Feature@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
