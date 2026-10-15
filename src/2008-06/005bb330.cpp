// roc 2008-06 005bb330  unit: RBX::Soundscape::SoundService  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb330
//
// 005bb330  6aff                 push -1
// 005bb332  68c98e7d00           push 0x7d8ec9
// 005bb337  64a100000000         mov eax, dword ptr fs:[0]
// 005bb33d  50                   push eax
// 005bb33e  64892500000000       mov dword ptr fs:[0], esp
// 005bb345  83ec1c               sub esp, 0x1c
// 005bb348  53                   push ebx
// 005bb349  56                   push esi
// 005bb34a  57                   push edi
// 005bb34b  6874df9400           push 0x94df74
// 005bb350  8bf1                 mov esi, ecx
// 005bb352  68247c8300           push 0x837c24
// 005bb357  8974242c             mov dword ptr [esp + 0x2c], esi
// 005bb35b  e83012fbff           call 0x56c590
// 005bb360  8d442423             lea eax, [esp + 0x23]
// 005bb364  50                   push eax
// 005bb365  8d542427             lea edx, [esp + 0x27]
// 005bb369  33ff                 xor edi, edi
// 005bb36b  8d4e30               lea ecx, [esi + 0x30]
// 005bb36e  52                   push edx
// 005bb36f  897c2438             mov dword ptr [esp + 0x38], edi
// 005bb373  c706347a8300         mov dword ptr [esi], 0x837a34
// 005bb379  e892ade8ff           call 0x446110
// 005bb37e  8d442423             lea eax, [esp + 0x23]
// 005bb382  50                   push eax
// 005bb383  8d542427             lea edx, [esp + 0x27]
// 005bb387  8d4e50               lea ecx, [esi + 0x50]
// 005bb38a  52                   push edx
// 005bb38b  c644243801           mov byte ptr [esp + 0x38], 1
// 005bb390  e87bade8ff           call 0x446110
// 005bb395  6a04                 push 4
// 005bb397  c644243402           mov byte ptr [esp + 0x34], 2
// 005bb39c  8d5e70               lea ebx, [esi + 0x70]
// 005bb39f  e87c550e00           call 0x6a0920
// 005bb3a4  83c404               add esp, 4
// 005bb3a7  3bc7                 cmp eax, edi
// 005bb3a9  7404                 je 0x5bb3af
// 005bb3ab  8918                 mov dword ptr [eax], ebx
// 005bb3ad  eb02                 jmp 0x5bb3b1
// 005bb3af  33c0                 xor eax, eax
// 005bb3b1  8903                 mov dword ptr [ebx], eax
// 005bb3b3  897b0c               mov dword ptr [ebx + 0xc], edi
// 005bb3b6  897b10               mov dword ptr [ebx + 0x10], edi
// 005bb3b9  897b14               mov dword ptr [ebx + 0x14], edi
// 005bb3bc  6a04                 push 4
// 005bb3be  c644243404           mov byte ptr [esp + 0x34], 4
// 005bb3c3  8d9e88000000         lea ebx, [esi + 0x88]
// 005bb3c9  e852550e00           call 0x6a0920
// 005bb3ce  83c404               add esp, 4
// 005bb3d1  3bc7                 cmp eax, edi
// 005bb3d3  7404                 je 0x5bb3d9
// 005bb3d5  8918                 mov dword ptr [eax], ebx
// 005bb3d7  eb02                 jmp 0x5bb3db
// 005bb3d9  33c0                 xor eax, eax
// 005bb3db  8903                 mov dword ptr [ebx], eax
// 005bb3dd  897b0c               mov dword ptr [ebx + 0xc], edi
// 005bb3e0  897b10               mov dword ptr [ebx + 0x10], edi
// 005bb3e3  897b14               mov dword ptr [ebx + 0x14], edi
// 005bb3e6  6a04                 push 4
// 005bb3e8  c644243406           mov byte ptr [esp + 0x34], 6
// 005bb3ed  8d9ea0000000         lea ebx, [esi + 0xa0]
// 005bb3f3  e828550e00           call 0x6a0920
// 005bb3f8  83c404               add esp, 4
// 005bb3fb  3bc7                 cmp eax, edi
// 005bb3fd  7404                 je 0x5bb403
// 005bb3ff  8918                 mov dword ptr [eax], ebx
// 005bb401  eb02                 jmp 0x5bb405
// 005bb403  33c0                 xor eax, eax
// 005bb405  8903                 mov dword ptr [ebx], eax
// 005bb407  897b0c               mov dword ptr [ebx + 0xc], edi
// 005bb40a  897b10               mov dword ptr [ebx + 0x10], edi
// 005bb40d  897b14               mov dword ptr [ebx + 0x14], edi
// 005bb410  6a04                 push 4
// 005bb412  c644243408           mov byte ptr [esp + 0x34], 8
// 005bb417  8d9eb8000000         lea ebx, [esi + 0xb8]
// 005bb41d  e8fe540e00           call 0x6a0920
// 005bb422  83c404               add esp, 4
// 005bb425  3bc7                 cmp eax, edi
// 005bb427  7404                 je 0x5bb42d
// 005bb429  8918                 mov dword ptr [eax], ebx
// 005bb42b  eb02                 jmp 0x5bb42f
// 005bb42d  33c0                 xor eax, eax
// 005bb42f  8903                 mov dword ptr [ebx], eax
// 005bb431  897b0c               mov dword ptr [ebx + 0xc], edi
// 005bb434  897b10               mov dword ptr [ebx + 0x10], edi
// 005bb437  897b14               mov dword ptr [ebx + 0x14], edi
// 005bb43a  6a04                 push 4
// 005bb43c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 005bb441  8d9ed0000000         lea ebx, [esi + 0xd0]
// 005bb447  e8d4540e00           call 0x6a0920
// 005bb44c  83c404               add esp, 4
// 005bb44f  3bc7                 cmp eax, edi
// 005bb451  7404                 je 0x5bb457
// 005bb453  8918                 mov dword ptr [eax], ebx
// 005bb455  eb02                 jmp 0x5bb459
// 005bb457  33c0                 xor eax, eax
// 005bb459  8903                 mov dword ptr [ebx], eax
// 005bb45b  897b0c               mov dword ptr [ebx + 0xc], edi
// 005bb45e  897b10               mov dword ptr [ebx + 0x10], edi
// 005bb461  897b14               mov dword ptr [ebx + 0x14], edi
// 005bb464  68187c8300           push 0x837c18
// 005bb469  57                   push edi
// 005bb46a  8bce                 mov ecx, esi
// 005bb46c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 005bb471  e8ba200900           call 0x64d530
// 005bb476  68087c8300           push 0x837c08
// 005bb47b  6a01                 push 1
// 005bb47d  8bce                 mov ecx, esi
// 005bb47f  e8ac200900           call 0x64d530
// 005bb484  68fc7b8300           push 0x837bfc
// 005bb489  6a02                 push 2
// 005bb48b  8bce                 mov ecx, esi
// 005bb48d  e89e200900           call 0x64d530
// 005bb492  68f47b8300           push 0x837bf4
// 005bb497  6a03                 push 3
// 005bb499  8bce                 mov ecx, esi
// 005bb49b  e890200900           call 0x64d530
// 005bb4a0  68e87b8300           push 0x837be8
// 005bb4a5  6a04                 push 4
// 005bb4a7  8bce                 mov ecx, esi
// 005bb4a9  e882200900           call 0x64d530
// 005bb4ae  68dc7b8300           push 0x837bdc
// 005bb4b3  6a05                 push 5
// 005bb4b5  8bce                 mov ecx, esi
// 005bb4b7  e874200900           call 0x64d530
// 005bb4bc  68d07b8300           push 0x837bd0
// 005bb4c1  6a06                 push 6
// 005bb4c3  8bce                 mov ecx, esi
// 005bb4c5  e866200900           call 0x64d530
// 005bb4ca  68c47b8300           push 0x837bc4
// 005bb4cf  6a07                 push 7
// 005bb4d1  8bce                 mov ecx, esi
// 005bb4d3  e858200900           call 0x64d530
// 005bb4d8  68b87b8300           push 0x837bb8
// 005bb4dd  6a08                 push 8
// 005bb4df  8bce                 mov ecx, esi
// 005bb4e1  e84a200900           call 0x64d530
// 005bb4e6  68b07b8300           push 0x837bb0
// 005bb4eb  6a09                 push 9
// 005bb4ed  8bce                 mov ecx, esi
// 005bb4ef  e83c200900           call 0x64d530
// 005bb4f4  68a87b8300           push 0x837ba8
// 005bb4f9  6a0a                 push 0xa
// 005bb4fb  8bce                 mov ecx, esi
// 005bb4fd  e82e200900           call 0x64d530
// 005bb502  68a07b8300           push 0x837ba0
// 005bb507  6a0b                 push 0xb
// 005bb509  8bce                 mov ecx, esi
// 005bb50b  e820200900           call 0x64d530
// 005bb510  688c7b8300           push 0x837b8c
// 005bb515  6a0c                 push 0xc
// 005bb517  8bce                 mov ecx, esi
// 005bb519  e812200900           call 0x64d530
// 005bb51e  68847b8300           push 0x837b84
// 005bb523  6a0d                 push 0xd
// 005bb525  8bce                 mov ecx, esi
// 005bb527  e804200900           call 0x64d530
// 005bb52c  68747b8300           push 0x837b74
// 005bb531  6a0e                 push 0xe
// 005bb533  8bce                 mov ecx, esi
// 005bb535  e8f61f0900           call 0x64d530
// 005bb53a  686c7b8300           push 0x837b6c
// 005bb53f  6a0f                 push 0xf
// 005bb541  8bce                 mov ecx, esi
// 005bb543  e8e81f0900           call 0x64d530
// 005bb548  68647b8300           push 0x837b64
// 005bb54d  6a10                 push 0x10
// 005bb54f  8bce                 mov ecx, esi
// 005bb551  e8da1f0900           call 0x64d530
// 005bb556  685c7b8300           push 0x837b5c
// 005bb55b  6a11                 push 0x11
// 005bb55d  8bce                 mov ecx, esi
// 005bb55f  e8cc1f0900           call 0x64d530
// 005bb564  68507b8300           push 0x837b50
// 005bb569  6a12                 push 0x12
// 005bb56b  8bce                 mov ecx, esi
// 005bb56d  e8be1f0900           call 0x64d530
// 005bb572  68487b8300           push 0x837b48
// 005bb577  6a13                 push 0x13
// 005bb579  8bce                 mov ecx, esi
// 005bb57b  e8b01f0900           call 0x64d530
// 005bb580  68407b8300           push 0x837b40
// 005bb585  6a14                 push 0x14
// 005bb587  8bce                 mov ecx, esi
// 005bb589  e8a21f0900           call 0x64d530
// 005bb58e  68347b8300           push 0x837b34
// 005bb593  6a15                 push 0x15
// 005bb595  8bce                 mov ecx, esi
// 005bb597  e8941f0900           call 0x64d530
// 005bb59c  68287b8300           push 0x837b28
// 005bb5a1  6a16                 push 0x16
// 005bb5a3  8bce                 mov ecx, esi
// 005bb5a5  e8861f0900           call 0x64d530
// 005bb5aa  681c7b8300           push 0x837b1c
// 005bb5af  6a17                 push 0x17
// 005bb5b1  8bce                 mov ecx, esi
// 005bb5b3  e8781f0900           call 0x64d530
// 005bb5b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bb5bc  5f                   pop edi
// 005bb5bd  8bc6                 mov eax, esi
// 005bb5bf  5e                   pop esi
// 005bb5c0  5b                   pop ebx
// 005bb5c1  64890d00000000       mov dword ptr fs:[0], ecx
// 005bb5c8  83c428               add esp, 0x28
// 005bb5cb  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4ReverbType@Soundscape@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
