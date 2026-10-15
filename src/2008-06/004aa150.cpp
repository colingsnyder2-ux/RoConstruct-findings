// roc 2008-06 004aa150  unit: RBX::NetworkSettings::W4PhysicsReceiveMethod::?$EnumDesc  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa150
//
// 004aa150  6aff                 push -1
// 004aa152  68c98e7d00           push 0x7d8ec9
// 004aa157  64a100000000         mov eax, dword ptr fs:[0]
// 004aa15d  50                   push eax
// 004aa15e  64892500000000       mov dword ptr fs:[0], esp
// 004aa165  83ec1c               sub esp, 0x1c
// 004aa168  53                   push ebx
// 004aa169  56                   push esi
// 004aa16a  57                   push edi
// 004aa16b  68e0a89300           push 0x93a8e0
// 004aa170  8bf1                 mov esi, ecx
// 004aa172  68ec408200           push 0x8240ec
// 004aa177  8974242c             mov dword ptr [esp + 0x2c], esi
// 004aa17b  e810240c00           call 0x56c590
// 004aa180  8d442423             lea eax, [esp + 0x23]
// 004aa184  50                   push eax
// 004aa185  8d542427             lea edx, [esp + 0x27]
// 004aa189  33ff                 xor edi, edi
// 004aa18b  8d4e30               lea ecx, [esi + 0x30]
// 004aa18e  52                   push edx
// 004aa18f  897c2438             mov dword ptr [esp + 0x38], edi
// 004aa193  c706b8408200         mov dword ptr [esi], 0x8240b8
// 004aa199  e872bff9ff           call 0x446110
// 004aa19e  8d442423             lea eax, [esp + 0x23]
// 004aa1a2  50                   push eax
// 004aa1a3  8d542427             lea edx, [esp + 0x27]
// 004aa1a7  8d4e50               lea ecx, [esi + 0x50]
// 004aa1aa  52                   push edx
// 004aa1ab  c644243801           mov byte ptr [esp + 0x38], 1
// 004aa1b0  e85bbff9ff           call 0x446110
// 004aa1b5  6a04                 push 4
// 004aa1b7  c644243402           mov byte ptr [esp + 0x34], 2
// 004aa1bc  8d5e70               lea ebx, [esi + 0x70]
// 004aa1bf  e85c671f00           call 0x6a0920
// 004aa1c4  83c404               add esp, 4
// 004aa1c7  3bc7                 cmp eax, edi
// 004aa1c9  7404                 je 0x4aa1cf
// 004aa1cb  8918                 mov dword ptr [eax], ebx
// 004aa1cd  eb02                 jmp 0x4aa1d1
// 004aa1cf  33c0                 xor eax, eax
// 004aa1d1  8903                 mov dword ptr [ebx], eax
// 004aa1d3  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa1d6  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa1d9  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa1dc  6a04                 push 4
// 004aa1de  c644243404           mov byte ptr [esp + 0x34], 4
// 004aa1e3  8d9e88000000         lea ebx, [esi + 0x88]
// 004aa1e9  e832671f00           call 0x6a0920
// 004aa1ee  83c404               add esp, 4
// 004aa1f1  3bc7                 cmp eax, edi
// 004aa1f3  7404                 je 0x4aa1f9
// 004aa1f5  8918                 mov dword ptr [eax], ebx
// 004aa1f7  eb02                 jmp 0x4aa1fb
// 004aa1f9  33c0                 xor eax, eax
// 004aa1fb  8903                 mov dword ptr [ebx], eax
// 004aa1fd  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa200  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa203  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa206  6a04                 push 4
// 004aa208  c644243406           mov byte ptr [esp + 0x34], 6
// 004aa20d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 004aa213  e808671f00           call 0x6a0920
// 004aa218  83c404               add esp, 4
// 004aa21b  3bc7                 cmp eax, edi
// 004aa21d  7404                 je 0x4aa223
// 004aa21f  8918                 mov dword ptr [eax], ebx
// 004aa221  eb02                 jmp 0x4aa225
// 004aa223  33c0                 xor eax, eax
// 004aa225  8903                 mov dword ptr [ebx], eax
// 004aa227  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa22a  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa22d  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa230  6a04                 push 4
// 004aa232  c644243408           mov byte ptr [esp + 0x34], 8
// 004aa237  8d9eb8000000         lea ebx, [esi + 0xb8]
// 004aa23d  e8de661f00           call 0x6a0920
// 004aa242  83c404               add esp, 4
// 004aa245  3bc7                 cmp eax, edi
// 004aa247  7404                 je 0x4aa24d
// 004aa249  8918                 mov dword ptr [eax], ebx
// 004aa24b  eb02                 jmp 0x4aa24f
// 004aa24d  33c0                 xor eax, eax
// 004aa24f  8903                 mov dword ptr [ebx], eax
// 004aa251  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa254  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa257  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa25a  6a04                 push 4
// 004aa25c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 004aa261  8d9ed0000000         lea ebx, [esi + 0xd0]
// 004aa267  e8b4661f00           call 0x6a0920
// 004aa26c  83c404               add esp, 4
// 004aa26f  3bc7                 cmp eax, edi
// 004aa271  7404                 je 0x4aa277
// 004aa273  8918                 mov dword ptr [eax], ebx
// 004aa275  eb02                 jmp 0x4aa279
// 004aa277  33c0                 xor eax, eax
// 004aa279  8903                 mov dword ptr [ebx], eax
// 004aa27b  897b0c               mov dword ptr [ebx + 0xc], edi
// 004aa27e  897b10               mov dword ptr [ebx + 0x10], edi
// 004aa281  897b14               mov dword ptr [ebx + 0x14], edi
// 004aa284  68d8408200           push 0x8240d8
// 004aa289  57                   push edi
// 004aa28a  8bce                 mov ecx, esi
// 004aa28c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 004aa291  e89a321a00           call 0x64d530
// 004aa296  68cc408200           push 0x8240cc
// 004aa29b  6a01                 push 1
// 004aa29d  8bce                 mov ecx, esi
// 004aa29f  e88c321a00           call 0x64d530
// 004aa2a4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004aa2a8  5f                   pop edi
// 004aa2a9  8bc6                 mov eax, esi
// 004aa2ab  5e                   pop esi
// 004aa2ac  5b                   pop ebx
// 004aa2ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa2b4  83c428               add esp, 0x28
// 004aa2b7  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4PhysicsSendMethod@NetworkSettings@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
