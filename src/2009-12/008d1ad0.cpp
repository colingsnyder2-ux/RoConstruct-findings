// roc 2009-12 008d1ad0  unit: PAVCXTPTabManagerAtom::?$CArray  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1ad0
//
// 008d1ad0  6aff                 push -1
// 008d1ad2  68d8519600           push 0x9651d8
// 008d1ad7  64a100000000         mov eax, dword ptr fs:[0]
// 008d1add  50                   push eax
// 008d1ade  83ec40               sub esp, 0x40
// 008d1ae1  53                   push ebx
// 008d1ae2  55                   push ebp
// 008d1ae3  56                   push esi
// 008d1ae4  57                   push edi
// 008d1ae5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d1aea  33c4                 xor eax, esp
// 008d1aec  50                   push eax
// 008d1aed  8d442454             lea eax, [esp + 0x54]
// 008d1af1  64a300000000         mov dword ptr fs:[0], eax
// 008d1af7  8bf9                 mov edi, ecx
// 008d1af9  8b742464             mov esi, dword ptr [esp + 0x64]
// 008d1afd  8b06                 mov eax, dword ptr [esi]
// 008d1aff  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d1b02  8bce                 mov ecx, esi
// 008d1b04  ffd2                 call edx
// 008d1b06  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008d1b0a  85c0                 test eax, eax
// 008d1b0c  0f84b7000000         je 0x8d1bc9
// 008d1b12  8b97e4000000         mov edx, dword ptr [edi + 0xe4]
// 008d1b18  8b4a4c               mov ecx, dword ptr [edx + 0x4c]
// 008d1b1b  83f9ff               cmp ecx, -1
// 008d1b1e  7503                 jne 0x8d1b23
// 008d1b20  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 008d1b23  8b424c               mov eax, dword ptr [edx + 0x4c]
// 008d1b26  83f8ff               cmp eax, -1
// 008d1b29  7503                 jne 0x8d1b2e
// 008d1b2b  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d1b2e  51                   push ecx
// 008d1b2f  50                   push eax
// 008d1b30  8d442474             lea eax, [esp + 0x74]
// 008d1b34  50                   push eax
// 008d1b35  8bcb                 mov ecx, ebx
// 008d1b37  e8bc2af2ff           call 0x7f45f8
// 008d1b3c  8b16                 mov edx, dword ptr [esi]
// 008d1b3e  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d1b41  8bce                 mov ecx, esi
// 008d1b43  bd01000000           mov ebp, 1
// 008d1b48  ffd0                 call eax
// 008d1b4a  50                   push eax
// 008d1b4b  83ec10               sub esp, 0x10
// 008d1b4e  8bc4                 mov eax, esp
// 008d1b50  8bcd                 mov ecx, ebp
// 008d1b52  8928                 mov dword ptr [eax], ebp
// 008d1b54  894804               mov dword ptr [eax + 4], ecx
// 008d1b57  894808               mov dword ptr [eax + 8], ecx
// 008d1b5a  89480c               mov dword ptr [eax + 0xc], ecx
// 008d1b5d  8d8c2480000000       lea ecx, [esp + 0x80]
// 008d1b64  51                   push ecx
// 008d1b65  e8162c0000           call 0x8d4780
// 008d1b6a  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 008d1b70  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d1b73  83c418               add esp, 0x18
// 008d1b76  83f9ff               cmp ecx, -1
// 008d1b79  7503                 jne 0x8d1b7e
// 008d1b7b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008d1b7e  8b5058               mov edx, dword ptr [eax + 0x58]
// 008d1b81  83faff               cmp edx, -1
// 008d1b84  7505                 jne 0x8d1b8b
// 008d1b86  8b4054               mov eax, dword ptr [eax + 0x54]
// 008d1b89  eb02                 jmp 0x8d1b8d
// 008d1b8b  8bc2                 mov eax, edx
// 008d1b8d  51                   push ecx
// 008d1b8e  50                   push eax
// 008d1b8f  8d542474             lea edx, [esp + 0x74]
// 008d1b93  52                   push edx
// 008d1b94  8bcb                 mov ecx, ebx
// 008d1b96  e85d2af2ff           call 0x7f45f8
// 008d1b9b  8b06                 mov eax, dword ptr [esi]
// 008d1b9d  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d1ba0  8bce                 mov ecx, esi
// 008d1ba2  ffd2                 call edx
// 008d1ba4  50                   push eax
// 008d1ba5  83ec10               sub esp, 0x10
// 008d1ba8  8bc4                 mov eax, esp
// 008d1baa  8928                 mov dword ptr [eax], ebp
// 008d1bac  33c9                 xor ecx, ecx
// 008d1bae  894804               mov dword ptr [eax + 4], ecx
// 008d1bb1  8bcd                 mov ecx, ebp
// 008d1bb3  894808               mov dword ptr [eax + 8], ecx
// 008d1bb6  89480c               mov dword ptr [eax + 0xc], ecx
// 008d1bb9  8d842480000000       lea eax, [esp + 0x80]
// 008d1bc0  50                   push eax
// 008d1bc1  e8ba2b0000           call 0x8d4780
// 008d1bc6  83c418               add esp, 0x18
// 008d1bc9  83bf8400000000       cmp dword ptr [edi + 0x84], 0
// 008d1bd0  7422                 je 0x8d1bf4
// 008d1bd2  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 008d1bd8  8b4858               mov ecx, dword ptr [eax + 0x58]
// 008d1bdb  83f9ff               cmp ecx, -1
// 008d1bde  7505                 jne 0x8d1be5
// 008d1be0  8b4054               mov eax, dword ptr [eax + 0x54]
// 008d1be3  eb02                 jmp 0x8d1be7
// 008d1be5  8bc1                 mov eax, ecx
// 008d1be7  50                   push eax
// 008d1be8  8d4c2470             lea ecx, [esp + 0x70]
// 008d1bec  51                   push ecx
// 008d1bed  8bcb                 mov ecx, ebx
// 008d1bef  e80a2af2ff           call 0x7f45fe
// 008d1bf4  8b16                 mov edx, dword ptr [esi]
// 008d1bf6  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d1bf9  8bce                 mov ecx, esi
// 008d1bfb  ffd0                 call eax
// 008d1bfd  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 008d1c00  8b5754               mov edx, dword ptr [edi + 0x54]
// 008d1c03  50                   push eax
// 008d1c04  83ec10               sub esp, 0x10
// 008d1c07  8bc4                 mov eax, esp
// 008d1c09  8908                 mov dword ptr [eax], ecx
// 008d1c0b  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 008d1c0e  895004               mov dword ptr [eax + 4], edx
// 008d1c11  8b575c               mov edx, dword ptr [edi + 0x5c]
// 008d1c14  894808               mov dword ptr [eax + 8], ecx
// 008d1c17  89500c               mov dword ptr [eax + 0xc], edx
// 008d1c1a  8d842480000000       lea eax, [esp + 0x80]
// 008d1c21  50                   push eax
// 008d1c22  e8592b0000           call 0x8d4780
// 008d1c27  83c418               add esp, 0x18
// 008d1c2a  6a01                 push 1
// 008d1c2c  8bcb                 mov ecx, ebx
// 008d1c2e  e85d480500           call 0x926490
// 008d1c33  83bf8400000000       cmp dword ptr [edi + 0x84], 0
// 008d1c3a  743d                 je 0x8d1c79
// 008d1c3c  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008d1c40  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 008d1c46  8b11                 mov edx, dword ptr [ecx]
// 008d1c48  8b5228               mov edx, dword ptr [edx + 0x28]
// 008d1c4b  83ec10               sub esp, 0x10
// 008d1c4e  8bc4                 mov eax, esp
// 008d1c50  8928                 mov dword ptr [eax], ebp
// 008d1c52  8bac2480000000       mov ebp, dword ptr [esp + 0x80]
// 008d1c59  896804               mov dword ptr [eax + 4], ebp
// 008d1c5c  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d1c63  896808               mov dword ptr [eax + 8], ebp
// 008d1c66  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 008d1c6d  53                   push ebx
// 008d1c6e  89680c               mov dword ptr [eax + 0xc], ebp
// 008d1c71  56                   push esi
// 008d1c72  8d44245c             lea eax, [esp + 0x5c]
// 008d1c76  50                   push eax
// 008d1c77  ffd2                 call edx
// 008d1c79  8b03                 mov eax, dword ptr [ebx]
// 008d1c7b  8b5058               mov edx, dword ptr [eax + 0x58]
// 008d1c7e  8d4c2424             lea ecx, [esp + 0x24]
// 008d1c82  51                   push ecx
// 008d1c83  8bcb                 mov ecx, ebx
// 008d1c85  ffd2                 call edx
// 008d1c87  33ed                 xor ebp, ebp
// 008d1c89  39afc4000000         cmp dword ptr [edi + 0xc4], ebp
// 008d1c8f  7412                 je 0x8d1ca3
// 008d1c91  8d4624               lea eax, [esi + 0x24]
// 008d1c94  50                   push eax
// 008d1c95  8d4c2428             lea ecx, [esp + 0x28]
// 008d1c99  51                   push ecx
// 008d1c9a  8bd1                 mov edx, ecx
// 008d1c9c  52                   push edx
// 008d1c9d  ff15dcca9800         call dword ptr [0x98cadc]
// 008d1ca3  8d442424             lea eax, [esp + 0x24]
// 008d1ca7  50                   push eax
// 008d1ca8  ff1568cc9800         call dword ptr [0x98cc68]
// 008d1cae  85c0                 test eax, eax
// 008d1cb0  0f850a010000         jne 0x8d1dc0
// 008d1cb6  896c2418             mov dword ptr [esp + 0x18], ebp
// 008d1cba  c7442414f82a9f00     mov dword ptr [esp + 0x14], 0x9f2af8
// 008d1cc2  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008d1cc6  39afc4000000         cmp dword ptr [edi + 0xc4], ebp
// 008d1ccc  0f84a1000000         je 0x8d1d73
// 008d1cd2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008d1cd6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d1cda  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008d1cde  89542438             mov dword ptr [esp + 0x38], edx
// 008d1ce2  8d54241c             lea edx, [esp + 0x1c]
// 008d1ce6  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d1cea  8b4308               mov eax, dword ptr [ebx + 8]
// 008d1ced  894c2434             mov dword ptr [esp + 0x34], ecx
// 008d1cf1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008d1cf5  52                   push edx
// 008d1cf6  50                   push eax
// 008d1cf7  894c2448             mov dword ptr [esp + 0x48], ecx
// 008d1cfb  ff15ccb09800         call dword ptr [0x98b0cc]
// 008d1d01  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d1d05  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008d1d09  f7d8                 neg eax
// 008d1d0b  f7d9                 neg ecx
// 008d1d0d  50                   push eax
// 008d1d0e  51                   push ecx
// 008d1d0f  8d4c243c             lea ecx, [esp + 0x3c]
// 008d1d13  51                   push ecx
// 008d1d14  ff156ccc9800         call dword ptr [0x98cc6c]
// 008d1d1a  8d542434             lea edx, [esp + 0x34]
// 008d1d1e  52                   push edx
// 008d1d1f  ff15c4b09800         call dword ptr [0x98b0c4]
// 008d1d25  50                   push eax
// 008d1d26  8d4c2418             lea ecx, [esp + 0x18]
// 008d1d2a  e8fb20f2ff           call 0x7f3e2a
// 008d1d2f  8d442414             lea eax, [esp + 0x14]
// 008d1d33  50                   push eax
// 008d1d34  8bcb                 mov ecx, ebx
// 008d1d36  e829490500           call 0x926664
// 008d1d3b  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008d1d3f  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 008d1d45  8b11                 mov edx, dword ptr [ecx]
// 008d1d47  56                   push esi
// 008d1d48  83ec10               sub esp, 0x10
// 008d1d4b  8bc4                 mov eax, esp
// 008d1d4d  8928                 mov dword ptr [eax], ebp
// 008d1d4f  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d1d56  896804               mov dword ptr [eax + 4], ebp
// 008d1d59  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 008d1d60  896808               mov dword ptr [eax + 8], ebp
// 008d1d63  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 008d1d6a  89680c               mov dword ptr [eax + 0xc], ebp
// 008d1d6d  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008d1d70  53                   push ebx
// 008d1d71  ffd0                 call eax
// 008d1d73  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008d1d79  8b6904               mov ebp, dword ptr [ecx + 4]
// 008d1d7c  83c5ff               add ebp, -1
// 008d1d7f  7814                 js 0x8d1d95
// 008d1d81  55                   push ebp
// 008d1d82  8d542428             lea edx, [esp + 0x28]
// 008d1d86  52                   push edx
// 008d1d87  53                   push ebx
// 008d1d88  56                   push esi
// 008d1d89  8bcf                 mov ecx, edi
// 008d1d8b  e8a0fbffff           call 0x8d1930
// 008d1d90  83ed01               sub ebp, 1
// 008d1d93  79ec                 jns 0x8d1d81
// 008d1d95  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 008d1d9c  7409                 je 0x8d1da7
// 008d1d9e  6a00                 push 0
// 008d1da0  8bcb                 mov ecx, ebx
// 008d1da2  e8bd480500           call 0x926664
// 008d1da7  8d4c2414             lea ecx, [esp + 0x14]
// 008d1dab  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008d1db3  c7442414f82a9f00     mov dword ptr [esp + 0x14], 0x9f2af8
// 008d1dbb  e870d4b3ff           call 0x40f230
// 008d1dc0  8b7e70               mov edi, dword ptr [esi + 0x70]
// 008d1dc3  83ef01               sub edi, 1
// 008d1dc6  781e                 js 0x8d1de6
// 008d1dc8  85ff                 test edi, edi
// 008d1dca  7c0d                 jl 0x8d1dd9
// 008d1dcc  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 008d1dcf  7d08                 jge 0x8d1dd9
// 008d1dd1  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008d1dd4  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 008d1dd7  eb02                 jmp 0x8d1ddb
// 008d1dd9  33c9                 xor ecx, ecx
// 008d1ddb  53                   push ebx
// 008d1ddc  e8cfcbffff           call 0x8ce9b0
// 008d1de1  83ef01               sub edi, 1
// 008d1de4  79e2                 jns 0x8d1dc8
// 008d1de6  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008d1dea  64890d00000000       mov dword ptr fs:[0], ecx
// 008d1df1  59                   pop ecx
// 008d1df2  5f                   pop edi
// 008d1df3  5e                   pop esi
// 008d1df4  5d                   pop ebp
// 008d1df5  5b                   pop ebx
// 008d1df6  83c44c               add esp, 0x4c
// 008d1df9  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp