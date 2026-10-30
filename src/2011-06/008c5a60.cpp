// roc 2011-06 008c5a60  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5a60
//
// 008c5a60  83ec38               sub esp, 0x38
// 008c5a63  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008c5a67  53                   push ebx
// 008c5a68  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008c5a6c  55                   push ebp
// 008c5a6d  56                   push esi
// 008c5a6e  8b742448             mov esi, dword ptr [esp + 0x48]
// 008c5a72  57                   push edi
// 008c5a73  c70000000000         mov dword ptr [eax], 0
// 008c5a79  8bce                 mov ecx, esi
// 008c5a7b  c70300000000         mov dword ptr [ebx], 0
// 008c5a81  33ff                 xor edi, edi
// 008c5a83  e84886f8ff           call 0x84e0d0
// 008c5a88  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008c5a8e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008c5a91  8954241c             mov dword ptr [esp + 0x1c], edx
// 008c5a95  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c5a99  8b6a04               mov ebp, dword ptr [edx + 4]
// 008c5a9c  89442418             mov dword ptr [esp + 0x18], eax
// 008c5aa0  85ed                 test ebp, ebp
// 008c5aa2  0f84d8000000         je 0x8c5b80
// 008c5aa8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008c5aac  8d442420             lea eax, [esp + 0x20]
// 008c5ab0  53                   push ebx
// 008c5ab1  50                   push eax
// 008c5ab2  e8a9f3ffff           call 0x8c4e60
// 008c5ab7  8d4c2428             lea ecx, [esp + 0x28]
// 008c5abb  53                   push ebx
// 008c5abc  51                   push ecx
// 008c5abd  89442424             mov dword ptr [esp + 0x24], eax
// 008c5ac1  e8baf3ffff           call 0x8c4e80
// 008c5ac6  83c410               add esp, 0x10
// 008c5ac9  89442410             mov dword ptr [esp + 0x10], eax
// 008c5acd  eb05                 jmp 0x8c5ad4
// 008c5acf  90                   nop 
// 008c5ad0  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008c5ad4  8bc5                 mov eax, ebp
// 008c5ad6  8b6d00               mov ebp, dword ptr [ebp]
// 008c5ad9  8b7008               mov esi, dword ptr [eax + 8]
// 008c5adc  85db                 test ebx, ebx
// 008c5ade  7405                 je 0x8c5ae5
// 008c5ae0  8b4604               mov eax, dword ptr [esi + 4]
// 008c5ae3  eb03                 jmp 0x8c5ae8
// 008c5ae5  8b4608               mov eax, dword ptr [esi + 8]
// 008c5ae8  8b16                 mov edx, dword ptr [esi]
// 008c5aea  8b5210               mov edx, dword ptr [edx + 0x10]
// 008c5aed  894630               mov dword ptr [esi + 0x30], eax
// 008c5af0  8d442420             lea eax, [esp + 0x20]
// 008c5af4  50                   push eax
// 008c5af5  8bce                 mov ecx, esi
// 008c5af7  ffd2                 call edx
// 008c5af9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c5afd  8b00                 mov eax, dword ptr [eax]
// 008c5aff  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008c5b02  3bc1                 cmp eax, ecx
// 008c5b04  8bd8                 mov ebx, eax
// 008c5b06  7c02                 jl 0x8c5b0a
// 008c5b08  8bd9                 mov ebx, ecx
// 008c5b0a  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c5b0e  8b12                 mov edx, dword ptr [edx]
// 008c5b10  3bd3                 cmp edx, ebx
// 008c5b12  7e04                 jle 0x8c5b18
// 008c5b14  8bc2                 mov eax, edx
// 008c5b16  eb06                 jmp 0x8c5b1e
// 008c5b18  3bc1                 cmp eax, ecx
// 008c5b1a  7c02                 jl 0x8c5b1e
// 008c5b1c  8bc1                 mov eax, ecx
// 008c5b1e  894630               mov dword ptr [esi + 0x30], eax
// 008c5b21  85ff                 test edi, edi
// 008c5b23  7542                 jne 0x8c5b67
// 008c5b25  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c5b29  8b06                 mov eax, dword ptr [esi]
// 008c5b2b  8b5008               mov edx, dword ptr [eax + 8]
// 008c5b2e  51                   push ecx
// 008c5b2f  8bce                 mov ecx, esi
// 008c5b31  ffd2                 call edx
// 008c5b33  85c0                 test eax, eax
// 008c5b35  7430                 je 0x8c5b67
// 008c5b37  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008c5b3b  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 008c5b41  740a                 je 0x8c5b4d
// 008c5b43  397e04               cmp dword ptr [esi + 4], edi
// 008c5b46  751f                 jne 0x8c5b67
// 008c5b48  397e08               cmp dword ptr [esi + 8], edi
// 008c5b4b  751a                 jne 0x8c5b67
// 008c5b4d  837c246800           cmp dword ptr [esp + 0x68], 0
// 008c5b52  8bfe                 mov edi, esi
// 008c5b54  740a                 je 0x8c5b60
// 008c5b56  33c0                 xor eax, eax
// 008c5b58  33c9                 xor ecx, ecx
// 008c5b5a  894604               mov dword ptr [esi + 4], eax
// 008c5b5d  894e08               mov dword ptr [esi + 8], ecx
// 008c5b60  c7463000000000       mov dword ptr [esi + 0x30], 0
// 008c5b67  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008c5b6a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008c5b6e  0108                 add dword ptr [eax], ecx
// 008c5b70  85ed                 test ebp, ebp
// 008c5b72  0f8558ffffff         jne 0x8c5ad0
// 008c5b78  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 008c5b7c  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c5b80  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008c5b84  85ed                 test ebp, ebp
// 008c5b86  740a                 je 0x8c5b92
// 008c5b88  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008c5b8c  2b442454             sub eax, dword ptr [esp + 0x54]
// 008c5b90  eb08                 jmp 0x8c5b9a
// 008c5b92  8b442460             mov eax, dword ptr [esp + 0x60]
// 008c5b96  2b442458             sub eax, dword ptr [esp + 0x58]
// 008c5b9a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 008c5b9d  49                   dec ecx
// 008c5b9e  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 008c5ba3  2bc1                 sub eax, ecx
// 008c5ba5  8903                 mov dword ptr [ebx], eax
// 008c5ba7  85ff                 test edi, edi
// 008c5ba9  7426                 je 0x8c5bd1
// 008c5bab  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008c5baf  8b0e                 mov ecx, dword ptr [esi]
// 008c5bb1  3bc8                 cmp ecx, eax
// 008c5bb3  7d1c                 jge 0x8c5bd1
// 008c5bb5  2bc1                 sub eax, ecx
// 008c5bb7  837c246800           cmp dword ptr [esp + 0x68], 0
// 008c5bbc  894730               mov dword ptr [edi + 0x30], eax
// 008c5bbf  740c                 je 0x8c5bcd
// 008c5bc1  85ed                 test ebp, ebp
// 008c5bc3  7405                 je 0x8c5bca
// 008c5bc5  894704               mov dword ptr [edi + 4], eax
// 008c5bc8  eb03                 jmp 0x8c5bcd
// 008c5bca  894708               mov dword ptr [edi + 8], eax
// 008c5bcd  8b03                 mov eax, dword ptr [ebx]
// 008c5bcf  8906                 mov dword ptr [esi], eax
// 008c5bd1  833b00               cmp dword ptr [ebx], 0
// 008c5bd4  0f8ebc000000         jle 0x8c5c96
// 008c5bda  8b6a04               mov ebp, dword ptr [edx + 4]
// 008c5bdd  85ed                 test ebp, ebp
// 008c5bdf  0f84b1000000         je 0x8c5c96
// 008c5be5  8bc5                 mov eax, ebp
// 008c5be7  8b7008               mov esi, dword ptr [eax + 8]
// 008c5bea  837e3000             cmp dword ptr [esi + 0x30], 0
// 008c5bee  8b6d00               mov ebp, dword ptr [ebp]
// 008c5bf1  0f8c84000000         jl 0x8c5c7b
// 008c5bf7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008c5bfb  833900               cmp dword ptr [ecx], 0
// 008c5bfe  0f8477000000         je 0x8c5c7b
// 008c5c04  8b16                 mov edx, dword ptr [esi]
// 008c5c06  8b5210               mov edx, dword ptr [edx + 0x10]
// 008c5c09  8d442420             lea eax, [esp + 0x20]
// 008c5c0d  50                   push eax
// 008c5c0e  8bce                 mov ecx, esi
// 008c5c10  ffd2                 call edx
// 008c5c12  8b442470             mov eax, dword ptr [esp + 0x70]
// 008c5c16  8b00                 mov eax, dword ptr [eax]
// 008c5c18  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 008c5c1b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008c5c1f  0fafc3               imul eax, ebx
// 008c5c22  99                   cdq 
// 008c5c23  f739                 idiv dword ptr [ecx]
// 008c5c25  8b542464             mov edx, dword ptr [esp + 0x64]
// 008c5c29  52                   push edx
// 008c5c2a  8bf8                 mov edi, eax
// 008c5c2c  8d442424             lea eax, [esp + 0x24]
// 008c5c30  50                   push eax
// 008c5c31  e82af2ffff           call 0x8c4e60
// 008c5c36  8b00                 mov eax, dword ptr [eax]
// 008c5c38  83c408               add esp, 8
// 008c5c3b  3bf8                 cmp edi, eax
// 008c5c3d  7c18                 jl 0x8c5c57
// 008c5c3f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008c5c43  51                   push ecx
// 008c5c44  8d542424             lea edx, [esp + 0x24]
// 008c5c48  52                   push edx
// 008c5c49  e832f2ffff           call 0x8c4e80
// 008c5c4e  8b00                 mov eax, dword ptr [eax]
// 008c5c50  83c408               add esp, 8
// 008c5c53  3bf8                 cmp edi, eax
// 008c5c55  7e05                 jle 0x8c5c5c
// 008c5c57  f7d8                 neg eax
// 008c5c59  894630               mov dword ptr [esi + 0x30], eax
// 008c5c5c  8b4630               mov eax, dword ptr [esi + 0x30]
// 008c5c5f  85c0                 test eax, eax
// 008c5c61  7d18                 jge 0x8c5c7b
// 008c5c63  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008c5c67  0101                 add dword ptr [ecx], eax
// 008c5c69  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008c5c6d  2918                 sub dword ptr [eax], ebx
// 008c5c6f  833900               cmp dword ptr [ecx], 0
// 008c5c72  7c17                 jl 0x8c5c8b
// 008c5c74  8b442450             mov eax, dword ptr [esp + 0x50]
// 008c5c78  8b6804               mov ebp, dword ptr [eax + 4]
// 008c5c7b  85ed                 test ebp, ebp
// 008c5c7d  0f8562ffffff         jne 0x8c5be5
// 008c5c83  5f                   pop edi
// 008c5c84  5e                   pop esi
// 008c5c85  5d                   pop ebp
// 008c5c86  5b                   pop ebx
// 008c5c87  83c438               add esp, 0x38
// 008c5c8a  c3                   ret 
// 008c5c8b  8b11                 mov edx, dword ptr [ecx]
// 008c5c8d  295630               sub dword ptr [esi + 0x30], edx
// 008c5c90  c70100000000         mov dword ptr [ecx], 0
// 008c5c96  5f                   pop edi
// 008c5c97  5e                   pop esi
// 008c5c98  5d                   pop ebp
// 008c5c99  5b                   pop ebx
// 008c5c9a  83c438               add esp, 0x38
// 008c5c9d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
