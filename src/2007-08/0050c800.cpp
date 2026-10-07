// roc 2007-08 0050c800  unit: G3D::BinaryInput  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c800
//
// 0050c800  53                   push ebx
// 0050c801  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0050c805  55                   push ebp
// 0050c806  56                   push esi
// 0050c807  8b742414             mov esi, dword ptr [esp + 0x14]
// 0050c80b  57                   push edi
// 0050c80c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0050c810  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0050c814  750a                 jne 0x50c820
// 0050c816  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0050c81a  0f84c8000000         je 0x50c8e8
// 0050c820  85db                 test ebx, ebx
// 0050c822  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0050c828  7502                 jne 0x50c82c
// 0050c82a  ffd5                 call ebp
// 0050c82c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0050c830  803800               cmp byte ptr [eax], 0
// 0050c833  743b                 je 0x50c870
// 0050c835  85db                 test ebx, ebx
// 0050c837  7404                 je 0x50c83d
// 0050c839  85f6                 test esi, esi
// 0050c83b  7502                 jne 0x50c83f
// 0050c83d  ffd5                 call ebp
// 0050c83f  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0050c842  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0050c845  7606                 jbe 0x50c84d
// 0050c847  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c84d  8bce                 mov ecx, esi
// 0050c84f  2bcd                 sub ecx, ebp
// 0050c851  c1f902               sar ecx, 2
// 0050c854  c1e105               shl ecx, 5
// 0050c857  03cf                 add ecx, edi
// 0050c859  3b0b                 cmp ecx, dword ptr [ebx]
// 0050c85b  7206                 jb 0x50c863
// 0050c85d  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c863  ba01000000           mov edx, 1
// 0050c868  8bcf                 mov ecx, edi
// 0050c86a  d3e2                 shl edx, cl
// 0050c86c  0916                 or dword ptr [esi], edx
// 0050c86e  eb3b                 jmp 0x50c8ab
// 0050c870  85db                 test ebx, ebx
// 0050c872  7404                 je 0x50c878
// 0050c874  85f6                 test esi, esi
// 0050c876  7502                 jne 0x50c87a
// 0050c878  ffd5                 call ebp
// 0050c87a  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0050c87d  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0050c880  7606                 jbe 0x50c888
// 0050c882  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c888  8bc6                 mov eax, esi
// 0050c88a  2bc5                 sub eax, ebp
// 0050c88c  c1f802               sar eax, 2
// 0050c88f  c1e005               shl eax, 5
// 0050c892  03c7                 add eax, edi
// 0050c894  3b03                 cmp eax, dword ptr [ebx]
// 0050c896  7206                 jb 0x50c89e
// 0050c898  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c89e  ba01000000           mov edx, 1
// 0050c8a3  8bcf                 mov ecx, edi
// 0050c8a5  d3e2                 shl edx, cl
// 0050c8a7  f7d2                 not edx
// 0050c8a9  2116                 and dword ptr [esi], edx
// 0050c8ab  8b6b08               mov ebp, dword ptr [ebx + 8]
// 0050c8ae  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0050c8b1  7606                 jbe 0x50c8b9
// 0050c8b3  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c8b9  8bc6                 mov eax, esi
// 0050c8bb  2bc5                 sub eax, ebp
// 0050c8bd  c1f802               sar eax, 2
// 0050c8c0  c1e005               shl eax, 5
// 0050c8c3  8d4c3801             lea ecx, [eax + edi + 1]
// 0050c8c7  3b0b                 cmp ecx, dword ptr [ebx]
// 0050c8c9  7606                 jbe 0x50c8d1
// 0050c8cb  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050c8d1  83ff1f               cmp edi, 0x1f
// 0050c8d4  7308                 jae 0x50c8de
// 0050c8d6  83c701               add edi, 1
// 0050c8d9  e932ffffff           jmp 0x50c810
// 0050c8de  33ff                 xor edi, edi
// 0050c8e0  83c604               add esi, 4
// 0050c8e3  e928ffffff           jmp 0x50c810
// 0050c8e8  5f                   pop edi
// 0050c8e9  5e                   pop esi
// 0050c8ea  5d                   pop ebp
// 0050c8eb  5b                   pop ebx
// 0050c8ec  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$_Fill@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@_N@std@@YAXV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@0AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
