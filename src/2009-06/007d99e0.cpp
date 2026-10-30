// roc 2009-06 007d99e0  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d99e0
//
// 007d99e0  83ec38               sub esp, 0x38
// 007d99e3  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007d99e7  53                   push ebx
// 007d99e8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 007d99ec  55                   push ebp
// 007d99ed  56                   push esi
// 007d99ee  8b742448             mov esi, dword ptr [esp + 0x48]
// 007d99f2  57                   push edi
// 007d99f3  c70000000000         mov dword ptr [eax], 0
// 007d99f9  8bce                 mov ecx, esi
// 007d99fb  c70300000000         mov dword ptr [ebx], 0
// 007d9a01  33ff                 xor edi, edi
// 007d9a03  e8183ff8ff           call 0x75d920
// 007d9a08  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007d9a0e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 007d9a11  8954241c             mov dword ptr [esp + 0x1c], edx
// 007d9a15  8b542450             mov edx, dword ptr [esp + 0x50]
// 007d9a19  8b6a04               mov ebp, dword ptr [edx + 4]
// 007d9a1c  89442418             mov dword ptr [esp + 0x18], eax
// 007d9a20  85ed                 test ebp, ebp
// 007d9a22  0f84d8000000         je 0x7d9b00
// 007d9a28  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 007d9a2c  8d442420             lea eax, [esp + 0x20]
// 007d9a30  53                   push ebx
// 007d9a31  50                   push eax
// 007d9a32  e8b9f3ffff           call 0x7d8df0
// 007d9a37  8d4c2428             lea ecx, [esp + 0x28]
// 007d9a3b  53                   push ebx
// 007d9a3c  51                   push ecx
// 007d9a3d  89442424             mov dword ptr [esp + 0x24], eax
// 007d9a41  e8caf3ffff           call 0x7d8e10
// 007d9a46  83c410               add esp, 0x10
// 007d9a49  89442410             mov dword ptr [esp + 0x10], eax
// 007d9a4d  eb05                 jmp 0x7d9a54
// 007d9a4f  90                   nop 
// 007d9a50  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 007d9a54  8bc5                 mov eax, ebp
// 007d9a56  8b6d00               mov ebp, dword ptr [ebp]
// 007d9a59  8b7008               mov esi, dword ptr [eax + 8]
// 007d9a5c  85db                 test ebx, ebx
// 007d9a5e  7405                 je 0x7d9a65
// 007d9a60  8b4604               mov eax, dword ptr [esi + 4]
// 007d9a63  eb03                 jmp 0x7d9a68
// 007d9a65  8b4608               mov eax, dword ptr [esi + 8]
// 007d9a68  8b16                 mov edx, dword ptr [esi]
// 007d9a6a  8b5210               mov edx, dword ptr [edx + 0x10]
// 007d9a6d  894630               mov dword ptr [esi + 0x30], eax
// 007d9a70  8d442420             lea eax, [esp + 0x20]
// 007d9a74  50                   push eax
// 007d9a75  8bce                 mov ecx, esi
// 007d9a77  ffd2                 call edx
// 007d9a79  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d9a7d  8b00                 mov eax, dword ptr [eax]
// 007d9a7f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007d9a82  3bc1                 cmp eax, ecx
// 007d9a84  8bd8                 mov ebx, eax
// 007d9a86  7c02                 jl 0x7d9a8a
// 007d9a88  8bd9                 mov ebx, ecx
// 007d9a8a  8b542414             mov edx, dword ptr [esp + 0x14]
// 007d9a8e  8b12                 mov edx, dword ptr [edx]
// 007d9a90  3bd3                 cmp edx, ebx
// 007d9a92  7e04                 jle 0x7d9a98
// 007d9a94  8bc2                 mov eax, edx
// 007d9a96  eb06                 jmp 0x7d9a9e
// 007d9a98  3bc1                 cmp eax, ecx
// 007d9a9a  7c02                 jl 0x7d9a9e
// 007d9a9c  8bc1                 mov eax, ecx
// 007d9a9e  894630               mov dword ptr [esi + 0x30], eax
// 007d9aa1  85ff                 test edi, edi
// 007d9aa3  7542                 jne 0x7d9ae7
// 007d9aa5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d9aa9  8b06                 mov eax, dword ptr [esi]
// 007d9aab  8b5008               mov edx, dword ptr [eax + 8]
// 007d9aae  51                   push ecx
// 007d9aaf  8bce                 mov ecx, esi
// 007d9ab1  ffd2                 call edx
// 007d9ab3  85c0                 test eax, eax
// 007d9ab5  7430                 je 0x7d9ae7
// 007d9ab7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007d9abb  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 007d9ac1  740a                 je 0x7d9acd
// 007d9ac3  397e04               cmp dword ptr [esi + 4], edi
// 007d9ac6  751f                 jne 0x7d9ae7
// 007d9ac8  397e08               cmp dword ptr [esi + 8], edi
// 007d9acb  751a                 jne 0x7d9ae7
// 007d9acd  837c246800           cmp dword ptr [esp + 0x68], 0
// 007d9ad2  8bfe                 mov edi, esi
// 007d9ad4  740a                 je 0x7d9ae0
// 007d9ad6  33c0                 xor eax, eax
// 007d9ad8  33c9                 xor ecx, ecx
// 007d9ada  894604               mov dword ptr [esi + 4], eax
// 007d9add  894e08               mov dword ptr [esi + 8], ecx
// 007d9ae0  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007d9ae7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007d9aea  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007d9aee  0108                 add dword ptr [eax], ecx
// 007d9af0  85ed                 test ebp, ebp
// 007d9af2  0f8558ffffff         jne 0x7d9a50
// 007d9af8  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 007d9afc  8b542450             mov edx, dword ptr [esp + 0x50]
// 007d9b00  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 007d9b04  85ed                 test ebp, ebp
// 007d9b06  740a                 je 0x7d9b12
// 007d9b08  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007d9b0c  2b442454             sub eax, dword ptr [esp + 0x54]
// 007d9b10  eb08                 jmp 0x7d9b1a
// 007d9b12  8b442460             mov eax, dword ptr [esp + 0x60]
// 007d9b16  2b442458             sub eax, dword ptr [esp + 0x58]
// 007d9b1a  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 007d9b1d  49                   dec ecx
// 007d9b1e  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 007d9b23  2bc1                 sub eax, ecx
// 007d9b25  8903                 mov dword ptr [ebx], eax
// 007d9b27  85ff                 test edi, edi
// 007d9b29  7426                 je 0x7d9b51
// 007d9b2b  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007d9b2f  8b0e                 mov ecx, dword ptr [esi]
// 007d9b31  3bc8                 cmp ecx, eax
// 007d9b33  7d1c                 jge 0x7d9b51
// 007d9b35  2bc1                 sub eax, ecx
// 007d9b37  837c246800           cmp dword ptr [esp + 0x68], 0
// 007d9b3c  894730               mov dword ptr [edi + 0x30], eax
// 007d9b3f  740c                 je 0x7d9b4d
// 007d9b41  85ed                 test ebp, ebp
// 007d9b43  7405                 je 0x7d9b4a
// 007d9b45  894704               mov dword ptr [edi + 4], eax
// 007d9b48  eb03                 jmp 0x7d9b4d
// 007d9b4a  894708               mov dword ptr [edi + 8], eax
// 007d9b4d  8b03                 mov eax, dword ptr [ebx]
// 007d9b4f  8906                 mov dword ptr [esi], eax
// 007d9b51  833b00               cmp dword ptr [ebx], 0
// 007d9b54  0f8ebc000000         jle 0x7d9c16
// 007d9b5a  8b6a04               mov ebp, dword ptr [edx + 4]
// 007d9b5d  85ed                 test ebp, ebp
// 007d9b5f  0f84b1000000         je 0x7d9c16
// 007d9b65  8bc5                 mov eax, ebp
// 007d9b67  8b7008               mov esi, dword ptr [eax + 8]
// 007d9b6a  837e3000             cmp dword ptr [esi + 0x30], 0
// 007d9b6e  8b6d00               mov ebp, dword ptr [ebp]
// 007d9b71  0f8c84000000         jl 0x7d9bfb
// 007d9b77  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007d9b7b  833900               cmp dword ptr [ecx], 0
// 007d9b7e  0f8477000000         je 0x7d9bfb
// 007d9b84  8b16                 mov edx, dword ptr [esi]
// 007d9b86  8b5210               mov edx, dword ptr [edx + 0x10]
// 007d9b89  8d442420             lea eax, [esp + 0x20]
// 007d9b8d  50                   push eax
// 007d9b8e  8bce                 mov ecx, esi
// 007d9b90  ffd2                 call edx
// 007d9b92  8b442470             mov eax, dword ptr [esp + 0x70]
// 007d9b96  8b00                 mov eax, dword ptr [eax]
// 007d9b98  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 007d9b9b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007d9b9f  0fafc3               imul eax, ebx
// 007d9ba2  99                   cdq 
// 007d9ba3  f739                 idiv dword ptr [ecx]
// 007d9ba5  8b542464             mov edx, dword ptr [esp + 0x64]
// 007d9ba9  52                   push edx
// 007d9baa  8bf8                 mov edi, eax
// 007d9bac  8d442424             lea eax, [esp + 0x24]
// 007d9bb0  50                   push eax
// 007d9bb1  e83af2ffff           call 0x7d8df0
// 007d9bb6  8b00                 mov eax, dword ptr [eax]
// 007d9bb8  83c408               add esp, 8
// 007d9bbb  3bf8                 cmp edi, eax
// 007d9bbd  7c18                 jl 0x7d9bd7
// 007d9bbf  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007d9bc3  51                   push ecx
// 007d9bc4  8d542424             lea edx, [esp + 0x24]
// 007d9bc8  52                   push edx
// 007d9bc9  e842f2ffff           call 0x7d8e10
// 007d9bce  8b00                 mov eax, dword ptr [eax]
// 007d9bd0  83c408               add esp, 8
// 007d9bd3  3bf8                 cmp edi, eax
// 007d9bd5  7e05                 jle 0x7d9bdc
// 007d9bd7  f7d8                 neg eax
// 007d9bd9  894630               mov dword ptr [esi + 0x30], eax
// 007d9bdc  8b4630               mov eax, dword ptr [esi + 0x30]
// 007d9bdf  85c0                 test eax, eax
// 007d9be1  7d18                 jge 0x7d9bfb
// 007d9be3  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007d9be7  0101                 add dword ptr [ecx], eax
// 007d9be9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007d9bed  2918                 sub dword ptr [eax], ebx
// 007d9bef  833900               cmp dword ptr [ecx], 0
// 007d9bf2  7c17                 jl 0x7d9c0b
// 007d9bf4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007d9bf8  8b6804               mov ebp, dword ptr [eax + 4]
// 007d9bfb  85ed                 test ebp, ebp
// 007d9bfd  0f8562ffffff         jne 0x7d9b65
// 007d9c03  5f                   pop edi
// 007d9c04  5e                   pop esi
// 007d9c05  5d                   pop ebp
// 007d9c06  5b                   pop ebx
// 007d9c07  83c438               add esp, 0x38
// 007d9c0a  c3                   ret 
// 007d9c0b  8b11                 mov edx, dword ptr [ecx]
// 007d9c0d  295630               sub dword ptr [esi + 0x30], edx
// 007d9c10  c70100000000         mov dword ptr [ecx], 0
// 007d9c16  5f                   pop edi
// 007d9c17  5e                   pop esi
// 007d9c18  5d                   pop ebp
// 007d9c19  5b                   pop ebx
// 007d9c1a  83c438               add esp, 0x38
// 007d9c1d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
