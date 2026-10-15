// roc 2008-06 005cd3f0  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 416 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd3f0
//
// 005cd3f0  6aff                 push -1
// 005cd3f2  68c98e7d00           push 0x7d8ec9
// 005cd3f7  64a100000000         mov eax, dword ptr fs:[0]
// 005cd3fd  50                   push eax
// 005cd3fe  64892500000000       mov dword ptr fs:[0], esp
// 005cd405  83ec1c               sub esp, 0x1c
// 005cd408  53                   push ebx
// 005cd409  56                   push esi
// 005cd40a  57                   push edi
// 005cd40b  6834179500           push 0x951734
// 005cd410  8bf1                 mov esi, ecx
// 005cd412  6888a48300           push 0x83a488
// 005cd417  8974242c             mov dword ptr [esp + 0x2c], esi
// 005cd41b  e870f1f9ff           call 0x56c590
// 005cd420  8d442423             lea eax, [esp + 0x23]
// 005cd424  50                   push eax
// 005cd425  8d542427             lea edx, [esp + 0x27]
// 005cd429  33ff                 xor edi, edi
// 005cd42b  8d4e30               lea ecx, [esi + 0x30]
// 005cd42e  52                   push edx
// 005cd42f  897c2438             mov dword ptr [esp + 0x38], edi
// 005cd433  c70650a48300         mov dword ptr [esi], 0x83a450
// 005cd439  e8d28ce7ff           call 0x446110
// 005cd43e  8d442423             lea eax, [esp + 0x23]
// 005cd442  50                   push eax
// 005cd443  8d542427             lea edx, [esp + 0x27]
// 005cd447  8d4e50               lea ecx, [esi + 0x50]
// 005cd44a  52                   push edx
// 005cd44b  c644243801           mov byte ptr [esp + 0x38], 1
// 005cd450  e8bb8ce7ff           call 0x446110
// 005cd455  6a04                 push 4
// 005cd457  c644243402           mov byte ptr [esp + 0x34], 2
// 005cd45c  8d5e70               lea ebx, [esi + 0x70]
// 005cd45f  e8bc340d00           call 0x6a0920
// 005cd464  83c404               add esp, 4
// 005cd467  3bc7                 cmp eax, edi
// 005cd469  7404                 je 0x5cd46f
// 005cd46b  8918                 mov dword ptr [eax], ebx
// 005cd46d  eb02                 jmp 0x5cd471
// 005cd46f  33c0                 xor eax, eax
// 005cd471  8903                 mov dword ptr [ebx], eax
// 005cd473  897b0c               mov dword ptr [ebx + 0xc], edi
// 005cd476  897b10               mov dword ptr [ebx + 0x10], edi
// 005cd479  897b14               mov dword ptr [ebx + 0x14], edi
// 005cd47c  6a04                 push 4
// 005cd47e  c644243404           mov byte ptr [esp + 0x34], 4
// 005cd483  8d9e88000000         lea ebx, [esi + 0x88]
// 005cd489  e892340d00           call 0x6a0920
// 005cd48e  83c404               add esp, 4
// 005cd491  3bc7                 cmp eax, edi
// 005cd493  7404                 je 0x5cd499
// 005cd495  8918                 mov dword ptr [eax], ebx
// 005cd497  eb02                 jmp 0x5cd49b
// 005cd499  33c0                 xor eax, eax
// 005cd49b  8903                 mov dword ptr [ebx], eax
// 005cd49d  897b0c               mov dword ptr [ebx + 0xc], edi
// 005cd4a0  897b10               mov dword ptr [ebx + 0x10], edi
// 005cd4a3  897b14               mov dword ptr [ebx + 0x14], edi
// 005cd4a6  6a04                 push 4
// 005cd4a8  c644243406           mov byte ptr [esp + 0x34], 6
// 005cd4ad  8d9ea0000000         lea ebx, [esi + 0xa0]
// 005cd4b3  e868340d00           call 0x6a0920
// 005cd4b8  83c404               add esp, 4
// 005cd4bb  3bc7                 cmp eax, edi
// 005cd4bd  7404                 je 0x5cd4c3
// 005cd4bf  8918                 mov dword ptr [eax], ebx
// 005cd4c1  eb02                 jmp 0x5cd4c5
// 005cd4c3  33c0                 xor eax, eax
// 005cd4c5  8903                 mov dword ptr [ebx], eax
// 005cd4c7  897b0c               mov dword ptr [ebx + 0xc], edi
// 005cd4ca  897b10               mov dword ptr [ebx + 0x10], edi
// 005cd4cd  897b14               mov dword ptr [ebx + 0x14], edi
// 005cd4d0  6a04                 push 4
// 005cd4d2  c644243408           mov byte ptr [esp + 0x34], 8
// 005cd4d7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 005cd4dd  e83e340d00           call 0x6a0920
// 005cd4e2  83c404               add esp, 4
// 005cd4e5  3bc7                 cmp eax, edi
// 005cd4e7  7404                 je 0x5cd4ed
// 005cd4e9  8918                 mov dword ptr [eax], ebx
// 005cd4eb  eb02                 jmp 0x5cd4ef
// 005cd4ed  33c0                 xor eax, eax
// 005cd4ef  8903                 mov dword ptr [ebx], eax
// 005cd4f1  897b0c               mov dword ptr [ebx + 0xc], edi
// 005cd4f4  897b10               mov dword ptr [ebx + 0x10], edi
// 005cd4f7  897b14               mov dword ptr [ebx + 0x14], edi
// 005cd4fa  6a04                 push 4
// 005cd4fc  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 005cd501  8d9ed0000000         lea ebx, [esi + 0xd0]
// 005cd507  e814340d00           call 0x6a0920
// 005cd50c  83c404               add esp, 4
// 005cd50f  3bc7                 cmp eax, edi
// 005cd511  7404                 je 0x5cd517
// 005cd513  8918                 mov dword ptr [eax], ebx
// 005cd515  eb02                 jmp 0x5cd519
// 005cd517  33c0                 xor eax, eax
// 005cd519  8903                 mov dword ptr [ebx], eax
// 005cd51b  897b0c               mov dword ptr [ebx + 0xc], edi
// 005cd51e  897b10               mov dword ptr [ebx + 0x10], edi
// 005cd521  897b14               mov dword ptr [ebx + 0x14], edi
// 005cd524  6880a48300           push 0x83a480
// 005cd529  57                   push edi
// 005cd52a  8bce                 mov ecx, esi
// 005cd52c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 005cd531  e8faff0700           call 0x64d530
// 005cd536  6878a48300           push 0x83a478
// 005cd53b  6a02                 push 2
// 005cd53d  8bce                 mov ecx, esi
// 005cd53f  e8ecff0700           call 0x64d530
// 005cd544  6870a48300           push 0x83a470
// 005cd549  6a01                 push 1
// 005cd54b  8bce                 mov ecx, esi
// 005cd54d  e8deff0700           call 0x64d530
// 005cd552  6868a48300           push 0x83a468
// 005cd557  6a03                 push 3
// 005cd559  8bce                 mov ecx, esi
// 005cd55b  e8d0ff0700           call 0x64d530
// 005cd560  6860a48300           push 0x83a460
// 005cd565  6a04                 push 4
// 005cd567  8bce                 mov ecx, esi
// 005cd569  e8c2ff0700           call 0x64d530
// 005cd56e  6858a48300           push 0x83a458
// 005cd573  6a05                 push 5
// 005cd575  8bce                 mov ecx, esi
// 005cd577  e8b4ff0700           call 0x64d530
// 005cd57c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cd580  5f                   pop edi
// 005cd581  8bc6                 mov eax, esi
// 005cd583  5e                   pop esi
// 005cd584  5b                   pop ebx
// 005cd585  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd58c  83c428               add esp, 0x28
// 005cd58f  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4CameraType@Camera@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
