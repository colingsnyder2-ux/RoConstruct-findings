// roc 2008-06 0056c170  unit: RBX::Reflection::EnumDescriptor  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056c170
//
// 0056c170  6aff                 push -1
// 0056c172  6850fc7c00           push 0x7cfc50
// 0056c177  64a100000000         mov eax, dword ptr fs:[0]
// 0056c17d  50                   push eax
// 0056c17e  64892500000000       mov dword ptr fs:[0], esp
// 0056c185  83ec10               sub esp, 0x10
// 0056c188  53                   push ebx
// 0056c189  55                   push ebp
// 0056c18a  56                   push esi
// 0056c18b  57                   push edi
// 0056c18c  8bf1                 mov esi, ecx
// 0056c18e  e87dfcffff           call 0x56be10
// 0056c193  8bc8                 mov ecx, eax
// 0056c195  89442418             mov dword ptr [esp + 0x18], eax
// 0056c199  e8f26effff           call 0x563090
// 0056c19e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0056c1a3  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0056c1a6  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0056c1ae  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0056c1b1  7606                 jbe 0x56c1b9
// 0056c1b3  ff1590288000         call dword ptr [0x802890]
// 0056c1b9  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056c1bc  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0056c1bf  7606                 jbe 0x56c1c7
// 0056c1c1  ff1590288000         call dword ptr [0x802890]
// 0056c1c7  8b1e                 mov ebx, dword ptr [esi]
// 0056c1c9  6a00                 push 0
// 0056c1cb  6800b55600           push 0x56b500
// 0056c1d0  8d442438             lea eax, [esp + 0x38]
// 0056c1d4  50                   push eax
// 0056c1d5  55                   push ebp
// 0056c1d6  57                   push edi
// 0056c1d7  897c2428             mov dword ptr [esp + 0x28], edi
// 0056c1db  e8b03c0000           call 0x56fe90
// 0056c1e0  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0056c1e3  83c414               add esp, 0x14
// 0056c1e6  8be8                 mov ebp, eax
// 0056c1e8  397e0c               cmp dword ptr [esi + 0xc], edi
// 0056c1eb  7606                 jbe 0x56c1f3
// 0056c1ed  ff1590288000         call dword ptr [0x802890]
// 0056c1f3  8b06                 mov eax, dword ptr [esi]
// 0056c1f5  85db                 test ebx, ebx
// 0056c1f7  7404                 je 0x56c1fd
// 0056c1f9  3bd8                 cmp ebx, eax
// 0056c1fb  7406                 je 0x56c203
// 0056c1fd  ff1590288000         call dword ptr [0x802890]
// 0056c203  3bef                 cmp ebp, edi
// 0056c205  7424                 je 0x56c22b
// 0056c207  85db                 test ebx, ebx
// 0056c209  0f8599000000         jne 0x56c2a8
// 0056c20f  ff1590288000         call dword ptr [0x802890]
// 0056c215  33c0                 xor eax, eax
// 0056c217  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0056c21a  7206                 jb 0x56c222
// 0056c21c  ff1590288000         call dword ptr [0x802890]
// 0056c222  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056c226  394d00               cmp dword ptr [ebp], ecx
// 0056c229  7413                 je 0x56c23e
// 0056c22b  8d542430             lea edx, [esp + 0x30]
// 0056c22f  52                   push edx
// 0056c230  55                   push ebp
// 0056c231  53                   push ebx
// 0056c232  8d44241c             lea eax, [esp + 0x1c]
// 0056c236  50                   push eax
// 0056c237  8bce                 mov ecx, esi
// 0056c239  e822baf5ff           call 0x4c7c60
// 0056c23e  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0056c241  3b5e28               cmp ebx, dword ptr [esi + 0x28]
// 0056c244  7606                 jbe 0x56c24c
// 0056c246  ff1590288000         call dword ptr [0x802890]
// 0056c24c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0056c24f  90                   nop 
// 0056c250  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 0056c253  396e24               cmp dword ptr [esi + 0x24], ebp
// 0056c256  7606                 jbe 0x56c25e
// 0056c258  ff1590288000         call dword ptr [0x802890]
// 0056c25e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056c261  85ff                 test edi, edi
// 0056c263  7404                 je 0x56c269
// 0056c265  3bf8                 cmp edi, eax
// 0056c267  7406                 je 0x56c26f
// 0056c269  ff1590288000         call dword ptr [0x802890]
// 0056c26f  3bdd                 cmp ebx, ebp
// 0056c271  7444                 je 0x56c2b7
// 0056c273  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0056c279  85ff                 test edi, edi
// 0056c27b  7532                 jne 0x56c2af
// 0056c27d  ffd5                 call ebp
// 0056c27f  33c0                 xor eax, eax
// 0056c281  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056c284  7202                 jb 0x56c288
// 0056c286  ffd5                 call ebp
// 0056c288  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056c28c  51                   push ecx
// 0056c28d  8b0b                 mov ecx, dword ptr [ebx]
// 0056c28f  e8dcfeffff           call 0x56c170
// 0056c294  85ff                 test edi, edi
// 0056c296  751b                 jne 0x56c2b3
// 0056c298  ffd5                 call ebp
// 0056c29a  33c0                 xor eax, eax
// 0056c29c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056c29f  7202                 jb 0x56c2a3
// 0056c2a1  ffd5                 call ebp
// 0056c2a3  83c304               add ebx, 4
// 0056c2a6  eba8                 jmp 0x56c250
// 0056c2a8  8b03                 mov eax, dword ptr [ebx]
// 0056c2aa  e968ffffff           jmp 0x56c217
// 0056c2af  8b07                 mov eax, dword ptr [edi]
// 0056c2b1  ebce                 jmp 0x56c281
// 0056c2b3  8b07                 mov eax, dword ptr [edi]
// 0056c2b5  ebe5                 jmp 0x56c29c
// 0056c2b7  6804109700           push 0x971004
// 0056c2bc  68007d4a00           push 0x4a7d00
// 0056c2c1  e86ab0feff           call 0x557330
// 0056c2c6  83c408               add esp, 8
// 0056c2c9  f6050010970001       test byte ptr [0x971000], 1
// 0056c2d0  7551                 jne 0x56c323
// 0056c2d2  830d0010970001       or dword ptr [0x971000], 1
// 0056c2d9  6a04                 push 4
// 0056c2db  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0056c2e0  e83b461300           call 0x6a0920
// 0056c2e5  33ed                 xor ebp, ebp
// 0056c2e7  83c404               add esp, 4
// 0056c2ea  3bc5                 cmp eax, ebp
// 0056c2ec  7408                 je 0x56c2f6
// 0056c2ee  c700e80f9700         mov dword ptr [eax], 0x970fe8
// 0056c2f4  eb02                 jmp 0x56c2f8
// 0056c2f6  33c0                 xor eax, eax
// 0056c2f8  a3e80f9700           mov dword ptr [0x970fe8], eax
// 0056c2fd  6810bd7f00           push 0x7fbd10
// 0056c302  892df40f9700         mov dword ptr [0x970ff4], ebp
// 0056c308  892df80f9700         mov dword ptr [0x970ff8], ebp
// 0056c30e  892dfc0f9700         mov dword ptr [0x970ffc], ebp
// 0056c314  e896541300           call 0x6a17af
// 0056c319  83c404               add esp, 4
// 0056c31c  c644242800           mov byte ptr [esp + 0x28], 0
// 0056c321  eb02                 jmp 0x56c325
// 0056c323  33ed                 xor ebp, ebp
// 0056c325  8b35f40f9700         mov esi, dword ptr [0x970ff4]
// 0056c32b  3b35f80f9700         cmp esi, dword ptr [0x970ff8]
// 0056c331  7606                 jbe 0x56c339
// 0056c333  ff1590288000         call dword ptr [0x802890]
// 0056c339  8b3de80f9700         mov edi, dword ptr [0x970fe8]
// 0056c33f  897c2410             mov dword ptr [esp + 0x10], edi
// 0056c343  8bde                 mov ebx, esi
// 0056c345  eb09                 jmp 0x56c350
// 0056c347  8da42400000000       lea esp, [esp]
// 0056c34e  8bff                 mov edi, edi
// 0056c350  6804109700           push 0x971004
// 0056c355  68007d4a00           push 0x4a7d00
// 0056c35a  e8d1affeff           call 0x557330
// 0056c35f  83c408               add esp, 8
// 0056c362  f6050010970001       test byte ptr [0x971000], 1
// 0056c369  754d                 jne 0x56c3b8
// 0056c36b  830d0010970001       or dword ptr [0x971000], 1
// 0056c372  6a04                 push 4
// 0056c374  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0056c379  e8a2451300           call 0x6a0920
// 0056c37e  83c404               add esp, 4
// 0056c381  3bc5                 cmp eax, ebp
// 0056c383  7408                 je 0x56c38d
// 0056c385  c700e80f9700         mov dword ptr [eax], 0x970fe8
// 0056c38b  eb02                 jmp 0x56c38f
// 0056c38d  33c0                 xor eax, eax
// 0056c38f  a3e80f9700           mov dword ptr [0x970fe8], eax
// 0056c394  6810bd7f00           push 0x7fbd10
// 0056c399  892df40f9700         mov dword ptr [0x970ff4], ebp
// 0056c39f  892df80f9700         mov dword ptr [0x970ff8], ebp
// 0056c3a5  892dfc0f9700         mov dword ptr [0x970ffc], ebp
// 0056c3ab  e8ff531300           call 0x6a17af
// 0056c3b0  83c404               add esp, 4
// 0056c3b3  c644242800           mov byte ptr [esp + 0x28], 0
// 0056c3b8  a1f80f9700           mov eax, dword ptr [0x970ff8]
// 0056c3bd  8bf0                 mov esi, eax
// 0056c3bf  3905f40f9700         cmp dword ptr [0x970ff4], eax
// 0056c3c5  7606                 jbe 0x56c3cd
// 0056c3c7  ff1590288000         call dword ptr [0x802890]
// 0056c3cd  3bfd                 cmp edi, ebp
// 0056c3cf  7408                 je 0x56c3d9
// 0056c3d1  3b3de80f9700         cmp edi, dword ptr [0x970fe8]
// 0056c3d7  7406                 je 0x56c3df
// 0056c3d9  ff1590288000         call dword ptr [0x802890]
// 0056c3df  3bde                 cmp ebx, esi
// 0056c3e1  0f8488000000         je 0x56c46f
// 0056c3e7  3bfd                 cmp edi, ebp
// 0056c3e9  7578                 jne 0x56c463
// 0056c3eb  ff1590288000         call dword ptr [0x802890]
// 0056c3f1  33c0                 xor eax, eax
// 0056c3f3  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056c3f6  7206                 jb 0x56c3fe
// 0056c3f8  ff1590288000         call dword ptr [0x802890]
// 0056c3fe  8b33                 mov esi, dword ptr [ebx]
// 0056c400  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0056c404  3bf7                 cmp esi, edi
// 0056c406  0f84e1000000         je 0x56c4ed
// 0056c40c  8b5604               mov edx, dword ptr [esi + 4]
// 0056c40f  8b4704               mov eax, dword ptr [edi + 4]
// 0056c412  52                   push edx
// 0056c413  50                   push eax
// 0056c414  e88736ebff           call 0x41faa0
// 0056c419  83c408               add esp, 8
// 0056c41c  3bc5                 cmp eax, ebp
// 0056c41e  7c4b                 jl 0x56c46b
// 0056c420  751a                 jne 0x56c43c
// 0056c422  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056c425  8b5104               mov edx, dword ptr [ecx + 4]
// 0056c428  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056c42b  8b4804               mov ecx, dword ptr [eax + 4]
// 0056c42e  52                   push edx
// 0056c42f  51                   push ecx
// 0056c430  e86b36ebff           call 0x41faa0
// 0056c435  83c408               add esp, 8
// 0056c438  3bc5                 cmp eax, ebp
// 0056c43a  7c2f                 jl 0x56c46b
// 0056c43c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056c440  3bc5                 cmp eax, ebp
// 0056c442  7523                 jne 0x56c467
// 0056c444  ff1590288000         call dword ptr [0x802890]
// 0056c44a  33c0                 xor eax, eax
// 0056c44c  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0056c44f  7206                 jb 0x56c457
// 0056c451  ff1590288000         call dword ptr [0x802890]
// 0056c457  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056c45b  83c304               add ebx, 4
// 0056c45e  e9edfeffff           jmp 0x56c350
// 0056c463  8b07                 mov eax, dword ptr [edi]
// 0056c465  eb8c                 jmp 0x56c3f3
// 0056c467  8b00                 mov eax, dword ptr [eax]
// 0056c469  ebe1                 jmp 0x56c44c
// 0056c46b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056c46f  6804109700           push 0x971004
// 0056c474  68007d4a00           push 0x4a7d00
// 0056c479  e8b2aefeff           call 0x557330
// 0056c47e  83c408               add esp, 8
// 0056c481  f6050010970001       test byte ptr [0x971000], 1
// 0056c488  754d                 jne 0x56c4d7
// 0056c48a  830d0010970001       or dword ptr [0x971000], 1
// 0056c491  6a04                 push 4
// 0056c493  c644242c05           mov byte ptr [esp + 0x2c], 5
// 0056c498  e883441300           call 0x6a0920
// 0056c49d  83c404               add esp, 4
// 0056c4a0  3bc5                 cmp eax, ebp
// 0056c4a2  7408                 je 0x56c4ac
// 0056c4a4  c700e80f9700         mov dword ptr [eax], 0x970fe8
// 0056c4aa  eb02                 jmp 0x56c4ae
// 0056c4ac  33c0                 xor eax, eax
// 0056c4ae  a3e80f9700           mov dword ptr [0x970fe8], eax
// 0056c4b3  6810bd7f00           push 0x7fbd10
// 0056c4b8  892df40f9700         mov dword ptr [0x970ff4], ebp
// 0056c4be  892df80f9700         mov dword ptr [0x970ff8], ebp
// 0056c4c4  892dfc0f9700         mov dword ptr [0x970ffc], ebp
// 0056c4ca  e8e0521300           call 0x6a17af
// 0056c4cf  83c404               add esp, 4
// 0056c4d2  c644242800           mov byte ptr [esp + 0x28], 0
// 0056c4d7  8d542430             lea edx, [esp + 0x30]
// 0056c4db  52                   push edx
// 0056c4dc  53                   push ebx
// 0056c4dd  57                   push edi
// 0056c4de  8d44241c             lea eax, [esp + 0x1c]
// 0056c4e2  50                   push eax
// 0056c4e3  b9e80f9700           mov ecx, 0x970fe8
// 0056c4e8  e873b7f5ff           call 0x4c7c60
// 0056c4ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056c4f1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0056c4f9  e8e26bffff           call 0x5630e0
// 0056c4fe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056c502  5f                   pop edi
// 0056c503  5e                   pop esi
// 0056c504  5d                   pop ebp
// 0056c505  5b                   pop ebx
// 0056c506  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c50d  83c41c               add esp, 0x1c
// 0056c510  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?declare@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVPropertyDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
