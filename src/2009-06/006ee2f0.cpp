// roc 2009-06 006ee2f0  unit: seg_006e0000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee2f0
//
// 006ee2f0  83ec30               sub esp, 0x30
// 006ee2f3  53                   push ebx
// 006ee2f4  55                   push ebp
// 006ee2f5  56                   push esi
// 006ee2f6  57                   push edi
// 006ee2f7  33ff                 xor edi, edi
// 006ee2f9  57                   push edi
// 006ee2fa  57                   push edi
// 006ee2fb  8bd9                 mov ebx, ecx
// 006ee2fd  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006ee300  57                   push edi
// 006ee301  8bf0                 mov esi, eax
// 006ee303  8b4304               mov eax, dword ptr [ebx + 4]
// 006ee306  6a0a                 push 0xa
// 006ee308  55                   push ebp
// 006ee309  89442424             mov dword ptr [esp + 0x24], eax
// 006ee30d  e8bebe0000           call 0x6fa1d0
// 006ee312  8bc8                 mov ecx, eax
// 006ee314  83c8ff               or eax, 0xffffffff
// 006ee317  894c2428             mov dword ptr [esp + 0x28], ecx
// 006ee31b  894610               mov dword ptr [esi + 0x10], eax
// 006ee31e  894614               mov dword ptr [esi + 0x14], eax
// 006ee321  c7060b000000         mov dword ptr [esi], 0xb
// 006ee327  894e08               mov dword ptr [esi + 8], ecx
// 006ee32a  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006ee32d  56                   push esi
// 006ee32e  51                   push ecx
// 006ee32f  897c2458             mov dword ptr [esp + 0x58], edi
// 006ee333  897c2450             mov dword ptr [esp + 0x50], edi
// 006ee337  897c2454             mov dword ptr [esp + 0x54], edi
// 006ee33b  8974244c             mov dword ptr [esp + 0x4c], esi
// 006ee33f  89442444             mov dword ptr [esp + 0x44], eax
// 006ee343  89442448             mov dword ptr [esp + 0x48], eax
// 006ee347  897c2434             mov dword ptr [esp + 0x34], edi
// 006ee34b  897c243c             mov dword ptr [esp + 0x3c], edi
// 006ee34f  e88cc40000           call 0x6fa7e0
// 006ee354  83c41c               add esp, 0x1c
// 006ee357  837b107b             cmp dword ptr [ebx + 0x10], 0x7b
// 006ee35b  7421                 je 0x6ee37e
// 006ee35d  6a7b                 push 0x7b
// 006ee35f  53                   push ebx
// 006ee360  e88b2e0000           call 0x6f11f0
// 006ee365  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006ee368  50                   push eax
// 006ee369  68b8dd8e00           push 0x8eddb8
// 006ee36e  52                   push edx
// 006ee36f  e82cadfdff           call 0x6c90a0
// 006ee374  50                   push eax
// 006ee375  53                   push ebx
// 006ee376  e8752f0000           call 0x6f12f0
// 006ee37b  83c41c               add esp, 0x1c
// 006ee37e  53                   push ebx
// 006ee37f  e85c430000           call 0x6f26e0
// 006ee384  83c404               add esp, 4
// 006ee387  837b107d             cmp dword ptr [ebx + 0x10], 0x7d
// 006ee38b  0f845f010000         je 0x6ee4f0
// 006ee391  397c2418             cmp dword ptr [esp + 0x18], edi
// 006ee395  7435                 je 0x6ee3cc
// 006ee397  8d442418             lea eax, [esp + 0x18]
// 006ee39b  50                   push eax
// 006ee39c  55                   push ebp
// 006ee39d  e83ec40000           call 0x6fa7e0
// 006ee3a2  83c408               add esp, 8
// 006ee3a5  837c243c32           cmp dword ptr [esp + 0x3c], 0x32
// 006ee3aa  897c2418             mov dword ptr [esp + 0x18], edi
// 006ee3ae  751c                 jne 0x6ee3cc
// 006ee3b0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006ee3b4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006ee3b8  8b4208               mov eax, dword ptr [edx + 8]
// 006ee3bb  6a32                 push 0x32
// 006ee3bd  51                   push ecx
// 006ee3be  50                   push eax
// 006ee3bf  55                   push ebp
// 006ee3c0  e86bbe0000           call 0x6fa230
// 006ee3c5  83c410               add esp, 0x10
// 006ee3c8  897c243c             mov dword ptr [esp + 0x3c], edi
// 006ee3cc  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006ee3cf  83f85b               cmp eax, 0x5b
// 006ee3d2  0f84f6000000         je 0x6ee4ce
// 006ee3d8  3d1d010000           cmp eax, 0x11d
// 006ee3dd  7474                 je 0x6ee453
// 006ee3df  57                   push edi
// 006ee3e0  8d4c241c             lea ecx, [esp + 0x1c]
// 006ee3e4  51                   push ecx
// 006ee3e5  53                   push ebx
// 006ee3e6  e8750c0000           call 0x6ef060
// 006ee3eb  83c40c               add esp, 0xc
// 006ee3ee  817c2438fdffff7f     cmp dword ptr [esp + 0x38], 0x7ffffffd
// 006ee3f6  7e49                 jle 0x6ee441
// 006ee3f8  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006ee3fb  8b16                 mov edx, dword ptr [esi]
// 006ee3fd  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006ee400  68b4de8e00           push 0x8edeb4
// 006ee405  68fdffff7f           push 0x7ffffffd
// 006ee40a  3bc7                 cmp eax, edi
// 006ee40c  7513                 jne 0x6ee421
// 006ee40e  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee411  68f0dd8e00           push 0x8eddf0
// 006ee416  50                   push eax
// 006ee417  e884acfdff           call 0x6c90a0
// 006ee41c  83c410               add esp, 0x10
// 006ee41f  eb12                 jmp 0x6ee433
// 006ee421  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ee424  50                   push eax
// 006ee425  68c8dd8e00           push 0x8eddc8
// 006ee42a  51                   push ecx
// 006ee42b  e870acfdff           call 0x6c90a0
// 006ee430  83c414               add esp, 0x14
// 006ee433  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ee436  57                   push edi
// 006ee437  50                   push eax
// 006ee438  52                   push edx
// 006ee439  e8122e0000           call 0x6f1250
// 006ee43e  83c40c               add esp, 0xc
// 006ee441  b801000000           mov eax, 1
// 006ee446  01442438             add dword ptr [esp + 0x38], eax
// 006ee44a  0144243c             add dword ptr [esp + 0x3c], eax
// 006ee44e  e988000000           jmp 0x6ee4db
// 006ee453  53                   push ebx
// 006ee454  e8d7420000           call 0x6f2730
// 006ee459  83c404               add esp, 4
// 006ee45c  837b203d             cmp dword ptr [ebx + 0x20], 0x3d
// 006ee460  7465                 je 0x6ee4c7
// 006ee462  57                   push edi
// 006ee463  8d44241c             lea eax, [esp + 0x1c]
// 006ee467  50                   push eax
// 006ee468  53                   push ebx
// 006ee469  e8f20b0000           call 0x6ef060
// 006ee46e  83c40c               add esp, 0xc
// 006ee471  817c2438fdffff7f     cmp dword ptr [esp + 0x38], 0x7ffffffd
// 006ee479  7ec6                 jle 0x6ee441
// 006ee47b  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006ee47e  8b0e                 mov ecx, dword ptr [esi]
// 006ee480  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 006ee483  68b4de8e00           push 0x8edeb4
// 006ee488  68fdffff7f           push 0x7ffffffd
// 006ee48d  3bc7                 cmp eax, edi
// 006ee48f  7519                 jne 0x6ee4aa
// 006ee491  8b5610               mov edx, dword ptr [esi + 0x10]
// 006ee494  68f0dd8e00           push 0x8eddf0
// 006ee499  52                   push edx
// 006ee49a  e801acfdff           call 0x6c90a0
// 006ee49f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ee4a2  83c410               add esp, 0x10
// 006ee4a5  57                   push edi
// 006ee4a6  50                   push eax
// 006ee4a7  51                   push ecx
// 006ee4a8  eb8f                 jmp 0x6ee439
// 006ee4aa  50                   push eax
// 006ee4ab  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee4ae  68c8dd8e00           push 0x8eddc8
// 006ee4b3  50                   push eax
// 006ee4b4  e8e7abfdff           call 0x6c90a0
// 006ee4b9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006ee4bc  83c414               add esp, 0x14
// 006ee4bf  57                   push edi
// 006ee4c0  50                   push eax
// 006ee4c1  51                   push ecx
// 006ee4c2  e972ffffff           jmp 0x6ee439
// 006ee4c7  8d542418             lea edx, [esp + 0x18]
// 006ee4cb  52                   push edx
// 006ee4cc  eb05                 jmp 0x6ee4d3
// 006ee4ce  8d442418             lea eax, [esp + 0x18]
// 006ee4d2  50                   push eax
// 006ee4d3  e8e8fcffff           call 0x6ee1c0
// 006ee4d8  83c404               add esp, 4
// 006ee4db  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006ee4de  83f82c               cmp eax, 0x2c
// 006ee4e1  0f8497feffff         je 0x6ee37e
// 006ee4e7  83f83b               cmp eax, 0x3b
// 006ee4ea  0f848efeffff         je 0x6ee37e
// 006ee4f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ee4f4  6a7b                 push 0x7b
// 006ee4f6  bf7d000000           mov edi, 0x7d
// 006ee4fb  8bf3                 mov esi, ebx
// 006ee4fd  e88ef3ffff           call 0x6ed890
// 006ee502  8d74241c             lea esi, [esp + 0x1c]
// 006ee506  8bfd                 mov edi, ebp
// 006ee508  e883fdffff           call 0x6ee290
// 006ee50d  8b4d00               mov ecx, dword ptr [ebp]
// 006ee510  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006ee514  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006ee517  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006ee51b  50                   push eax
// 006ee51c  8d34ba               lea esi, [edx + edi*4]
// 006ee51f  e8aca6fdff           call 0x6c8bd0
// 006ee524  8b0e                 mov ecx, dword ptr [esi]
// 006ee526  c1e017               shl eax, 0x17
// 006ee529  81e1ffff7f00         and ecx, 0x7fffff
// 006ee52f  0bc1                 or eax, ecx
// 006ee531  8906                 mov dword ptr [esi], eax
// 006ee533  8b5500               mov edx, dword ptr [ebp]
// 006ee536  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006ee53a  8b420c               mov eax, dword ptr [edx + 0xc]
// 006ee53d  51                   push ecx
// 006ee53e  8d34b8               lea esi, [eax + edi*4]
// 006ee541  e88aa6fdff           call 0x6c8bd0
// 006ee546  c1e00e               shl eax, 0xe
// 006ee549  3306                 xor eax, dword ptr [esi]
// 006ee54b  83c40c               add esp, 0xc
// 006ee54e  5f                   pop edi
// 006ee54f  2500c07f00           and eax, 0x7fc000
// 006ee554  3106                 xor dword ptr [esi], eax
// 006ee556  5e                   pop esi
// 006ee557  5d                   pop ebp
// 006ee558  5b                   pop ebx
// 006ee559  83c430               add esp, 0x30
// 006ee55c  c3                   ret 
// library lua-5.1.4/lparser.c (function _constructor)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
