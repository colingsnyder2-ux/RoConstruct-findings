// roc 2010-06 0077f590  unit: seg_00770000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f590
//
// 0077f590  83ec30               sub esp, 0x30
// 0077f593  53                   push ebx
// 0077f594  55                   push ebp
// 0077f595  56                   push esi
// 0077f596  57                   push edi
// 0077f597  33ff                 xor edi, edi
// 0077f599  57                   push edi
// 0077f59a  57                   push edi
// 0077f59b  8bd9                 mov ebx, ecx
// 0077f59d  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 0077f5a0  57                   push edi
// 0077f5a1  8bf0                 mov esi, eax
// 0077f5a3  8b4304               mov eax, dword ptr [ebx + 4]
// 0077f5a6  6a0a                 push 0xa
// 0077f5a8  55                   push ebp
// 0077f5a9  89442424             mov dword ptr [esp + 0x24], eax
// 0077f5ad  e8ae050100           call 0x78fb60
// 0077f5b2  8bc8                 mov ecx, eax
// 0077f5b4  83c8ff               or eax, 0xffffffff
// 0077f5b7  894c2428             mov dword ptr [esp + 0x28], ecx
// 0077f5bb  894610               mov dword ptr [esi + 0x10], eax
// 0077f5be  894614               mov dword ptr [esi + 0x14], eax
// 0077f5c1  c7060b000000         mov dword ptr [esi], 0xb
// 0077f5c7  894e08               mov dword ptr [esi + 8], ecx
// 0077f5ca  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0077f5cd  56                   push esi
// 0077f5ce  51                   push ecx
// 0077f5cf  897c2458             mov dword ptr [esp + 0x58], edi
// 0077f5d3  897c2450             mov dword ptr [esp + 0x50], edi
// 0077f5d7  897c2454             mov dword ptr [esp + 0x54], edi
// 0077f5db  8974244c             mov dword ptr [esp + 0x4c], esi
// 0077f5df  89442444             mov dword ptr [esp + 0x44], eax
// 0077f5e3  89442448             mov dword ptr [esp + 0x48], eax
// 0077f5e7  897c2434             mov dword ptr [esp + 0x34], edi
// 0077f5eb  897c243c             mov dword ptr [esp + 0x3c], edi
// 0077f5ef  e87c0b0100           call 0x790170
// 0077f5f4  83c41c               add esp, 0x1c
// 0077f5f7  837b107b             cmp dword ptr [ebx + 0x10], 0x7b
// 0077f5fb  7421                 je 0x77f61e
// 0077f5fd  6a7b                 push 0x7b
// 0077f5ff  53                   push ebx
// 0077f600  e88b2e0000           call 0x782490
// 0077f605  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0077f608  50                   push eax
// 0077f609  683830a500           push 0xa53038
// 0077f60e  52                   push edx
// 0077f60f  e8cc37fbff           call 0x732de0
// 0077f614  50                   push eax
// 0077f615  53                   push ebx
// 0077f616  e8752f0000           call 0x782590
// 0077f61b  83c41c               add esp, 0x1c
// 0077f61e  53                   push ebx
// 0077f61f  e85c430000           call 0x783980
// 0077f624  83c404               add esp, 4
// 0077f627  837b107d             cmp dword ptr [ebx + 0x10], 0x7d
// 0077f62b  0f845f010000         je 0x77f790
// 0077f631  397c2418             cmp dword ptr [esp + 0x18], edi
// 0077f635  7435                 je 0x77f66c
// 0077f637  8d442418             lea eax, [esp + 0x18]
// 0077f63b  50                   push eax
// 0077f63c  55                   push ebp
// 0077f63d  e82e0b0100           call 0x790170
// 0077f642  83c408               add esp, 8
// 0077f645  837c243c32           cmp dword ptr [esp + 0x3c], 0x32
// 0077f64a  897c2418             mov dword ptr [esp + 0x18], edi
// 0077f64e  751c                 jne 0x77f66c
// 0077f650  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0077f654  8b542430             mov edx, dword ptr [esp + 0x30]
// 0077f658  8b4208               mov eax, dword ptr [edx + 8]
// 0077f65b  6a32                 push 0x32
// 0077f65d  51                   push ecx
// 0077f65e  50                   push eax
// 0077f65f  55                   push ebp
// 0077f660  e85b050100           call 0x78fbc0
// 0077f665  83c410               add esp, 0x10
// 0077f668  897c243c             mov dword ptr [esp + 0x3c], edi
// 0077f66c  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0077f66f  83f85b               cmp eax, 0x5b
// 0077f672  0f84f6000000         je 0x77f76e
// 0077f678  3d1d010000           cmp eax, 0x11d
// 0077f67d  7474                 je 0x77f6f3
// 0077f67f  57                   push edi
// 0077f680  8d4c241c             lea ecx, [esp + 0x1c]
// 0077f684  51                   push ecx
// 0077f685  53                   push ebx
// 0077f686  e8750c0000           call 0x780300
// 0077f68b  83c40c               add esp, 0xc
// 0077f68e  817c2438fdffff7f     cmp dword ptr [esp + 0x38], 0x7ffffffd
// 0077f696  7e49                 jle 0x77f6e1
// 0077f698  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0077f69b  8b16                 mov edx, dword ptr [esi]
// 0077f69d  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0077f6a0  683431a500           push 0xa53134
// 0077f6a5  68fdffff7f           push 0x7ffffffd
// 0077f6aa  3bc7                 cmp eax, edi
// 0077f6ac  7513                 jne 0x77f6c1
// 0077f6ae  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077f6b1  687030a500           push 0xa53070
// 0077f6b6  50                   push eax
// 0077f6b7  e82437fbff           call 0x732de0
// 0077f6bc  83c410               add esp, 0x10
// 0077f6bf  eb12                 jmp 0x77f6d3
// 0077f6c1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077f6c4  50                   push eax
// 0077f6c5  684830a500           push 0xa53048
// 0077f6ca  51                   push ecx
// 0077f6cb  e81037fbff           call 0x732de0
// 0077f6d0  83c414               add esp, 0x14
// 0077f6d3  8b560c               mov edx, dword ptr [esi + 0xc]
// 0077f6d6  57                   push edi
// 0077f6d7  50                   push eax
// 0077f6d8  52                   push edx
// 0077f6d9  e8122e0000           call 0x7824f0
// 0077f6de  83c40c               add esp, 0xc
// 0077f6e1  b801000000           mov eax, 1
// 0077f6e6  01442438             add dword ptr [esp + 0x38], eax
// 0077f6ea  0144243c             add dword ptr [esp + 0x3c], eax
// 0077f6ee  e988000000           jmp 0x77f77b
// 0077f6f3  53                   push ebx
// 0077f6f4  e8d7420000           call 0x7839d0
// 0077f6f9  83c404               add esp, 4
// 0077f6fc  837b203d             cmp dword ptr [ebx + 0x20], 0x3d
// 0077f700  7465                 je 0x77f767
// 0077f702  57                   push edi
// 0077f703  8d44241c             lea eax, [esp + 0x1c]
// 0077f707  50                   push eax
// 0077f708  53                   push ebx
// 0077f709  e8f20b0000           call 0x780300
// 0077f70e  83c40c               add esp, 0xc
// 0077f711  817c2438fdffff7f     cmp dword ptr [esp + 0x38], 0x7ffffffd
// 0077f719  7ec6                 jle 0x77f6e1
// 0077f71b  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0077f71e  8b0e                 mov ecx, dword ptr [esi]
// 0077f720  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0077f723  683431a500           push 0xa53134
// 0077f728  68fdffff7f           push 0x7ffffffd
// 0077f72d  3bc7                 cmp eax, edi
// 0077f72f  7519                 jne 0x77f74a
// 0077f731  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077f734  687030a500           push 0xa53070
// 0077f739  52                   push edx
// 0077f73a  e8a136fbff           call 0x732de0
// 0077f73f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077f742  83c410               add esp, 0x10
// 0077f745  57                   push edi
// 0077f746  50                   push eax
// 0077f747  51                   push ecx
// 0077f748  eb8f                 jmp 0x77f6d9
// 0077f74a  50                   push eax
// 0077f74b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077f74e  684830a500           push 0xa53048
// 0077f753  50                   push eax
// 0077f754  e88736fbff           call 0x732de0
// 0077f759  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077f75c  83c414               add esp, 0x14
// 0077f75f  57                   push edi
// 0077f760  50                   push eax
// 0077f761  51                   push ecx
// 0077f762  e972ffffff           jmp 0x77f6d9
// 0077f767  8d542418             lea edx, [esp + 0x18]
// 0077f76b  52                   push edx
// 0077f76c  eb05                 jmp 0x77f773
// 0077f76e  8d442418             lea eax, [esp + 0x18]
// 0077f772  50                   push eax
// 0077f773  e8e8fcffff           call 0x77f460
// 0077f778  83c404               add esp, 4
// 0077f77b  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0077f77e  83f82c               cmp eax, 0x2c
// 0077f781  0f8497feffff         je 0x77f61e
// 0077f787  83f83b               cmp eax, 0x3b
// 0077f78a  0f848efeffff         je 0x77f61e
// 0077f790  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077f794  6a7b                 push 0x7b
// 0077f796  bf7d000000           mov edi, 0x7d
// 0077f79b  8bf3                 mov esi, ebx
// 0077f79d  e88ef3ffff           call 0x77eb30
// 0077f7a2  8d74241c             lea esi, [esp + 0x1c]
// 0077f7a6  8bfd                 mov edi, ebp
// 0077f7a8  e883fdffff           call 0x77f530
// 0077f7ad  8b4d00               mov ecx, dword ptr [ebp]
// 0077f7b0  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0077f7b4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0077f7b7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077f7bb  50                   push eax
// 0077f7bc  8d34ba               lea esi, [edx + edi*4]
// 0077f7bf  e84c31fbff           call 0x732910
// 0077f7c4  8b0e                 mov ecx, dword ptr [esi]
// 0077f7c6  c1e017               shl eax, 0x17
// 0077f7c9  81e1ffff7f00         and ecx, 0x7fffff
// 0077f7cf  0bc1                 or eax, ecx
// 0077f7d1  8906                 mov dword ptr [esi], eax
// 0077f7d3  8b5500               mov edx, dword ptr [ebp]
// 0077f7d6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0077f7da  8b420c               mov eax, dword ptr [edx + 0xc]
// 0077f7dd  51                   push ecx
// 0077f7de  8d34b8               lea esi, [eax + edi*4]
// 0077f7e1  e82a31fbff           call 0x732910
// 0077f7e6  c1e00e               shl eax, 0xe
// 0077f7e9  3306                 xor eax, dword ptr [esi]
// 0077f7eb  83c40c               add esp, 0xc
// 0077f7ee  5f                   pop edi
// 0077f7ef  2500c07f00           and eax, 0x7fc000
// 0077f7f4  3106                 xor dword ptr [esi], eax
// 0077f7f6  5e                   pop esi
// 0077f7f7  5d                   pop ebp
// 0077f7f8  5b                   pop ebx
// 0077f7f9  83c430               add esp, 0x30
// 0077f7fc  c3                   ret 
// library lua-5.1.4/lparser.c (function _constructor)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
