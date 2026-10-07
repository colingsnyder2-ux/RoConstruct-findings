// roc 2012-06 009ee4d0  unit: CXTPPropertyGridView  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee4d0
//
// 009ee4d0  53                   push ebx
// 009ee4d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009ee4d5  56                   push esi
// 009ee4d6  57                   push edi
// 009ee4d7  33ff                 xor edi, edi
// 009ee4d9  3bdf                 cmp ebx, edi
// 009ee4db  8bf1                 mov esi, ecx
// 009ee4dd  7d05                 jge 0x9ee4e4
// 009ee4df  e8dc3ef9ff           call 0x9823c0
// 009ee4e4  8b442414             mov eax, dword ptr [esp + 0x14]
// 009ee4e8  3bc7                 cmp eax, edi
// 009ee4ea  7c03                 jl 0x9ee4ef
// 009ee4ec  894610               mov dword ptr [esi + 0x10], eax
// 009ee4ef  3bdf                 cmp ebx, edi
// 009ee4f1  751f                 jne 0x9ee512
// 009ee4f3  8b4604               mov eax, dword ptr [esi + 4]
// 009ee4f6  3bc7                 cmp eax, edi
// 009ee4f8  740c                 je 0x9ee506
// 009ee4fa  50                   push eax
// 009ee4fb  e8ba3ef9ff           call 0x9823ba
// 009ee500  83c404               add esp, 4
// 009ee503  897e04               mov dword ptr [esi + 4], edi
// 009ee506  897e0c               mov dword ptr [esi + 0xc], edi
// 009ee509  897e08               mov dword ptr [esi + 8], edi
// 009ee50c  5f                   pop edi
// 009ee50d  5e                   pop esi
// 009ee50e  5b                   pop ebx
// 009ee50f  c20800               ret 8
// 009ee512  8b5604               mov edx, dword ptr [esi + 4]
// 009ee515  55                   push ebp
// 009ee516  3bd7                 cmp edx, edi
// 009ee518  7533                 jne 0x9ee54d
// 009ee51a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 009ee51d  3bdd                 cmp ebx, ebp
// 009ee51f  7e02                 jle 0x9ee523
// 009ee521  8beb                 mov ebp, ebx
// 009ee523  8d7cad00             lea edi, [ebp + ebp*4]
// 009ee527  03ff                 add edi, edi
// 009ee529  03ff                 add edi, edi
// 009ee52b  57                   push edi
// 009ee52c  e8bf3ef9ff           call 0x9823f0
// 009ee531  57                   push edi
// 009ee532  6a00                 push 0
// 009ee534  50                   push eax
// 009ee535  894604               mov dword ptr [esi + 4], eax
// 009ee538  e8374ef9ff           call 0x983374
// 009ee53d  83c410               add esp, 0x10
// 009ee540  896e0c               mov dword ptr [esi + 0xc], ebp
// 009ee543  5d                   pop ebp
// 009ee544  5f                   pop edi
// 009ee545  895e08               mov dword ptr [esi + 8], ebx
// 009ee548  5e                   pop esi
// 009ee549  5b                   pop ebx
// 009ee54a  c20800               ret 8
// 009ee54d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009ee550  3bd9                 cmp ebx, ecx
// 009ee552  7f31                 jg 0x9ee585
// 009ee554  8b4e08               mov ecx, dword ptr [esi + 8]
// 009ee557  3bd9                 cmp ebx, ecx
// 009ee559  0f8ec6000000         jle 0x9ee625
// 009ee55f  8bc3                 mov eax, ebx
// 009ee561  2bc1                 sub eax, ecx
// 009ee563  8d0480               lea eax, [eax + eax*4]
// 009ee566  03c0                 add eax, eax
// 009ee568  03c0                 add eax, eax
// 009ee56a  50                   push eax
// 009ee56b  8d0c89               lea ecx, [ecx + ecx*4]
// 009ee56e  8d148a               lea edx, [edx + ecx*4]
// 009ee571  57                   push edi
// 009ee572  52                   push edx
// 009ee573  e8fc4df9ff           call 0x983374
// 009ee578  83c40c               add esp, 0xc
// 009ee57b  5d                   pop ebp
// 009ee57c  5f                   pop edi
// 009ee57d  895e08               mov dword ptr [esi + 8], ebx
// 009ee580  5e                   pop esi
// 009ee581  5b                   pop ebx
// 009ee582  c20800               ret 8
// 009ee585  8b4610               mov eax, dword ptr [esi + 0x10]
// 009ee588  3bc7                 cmp eax, edi
// 009ee58a  7524                 jne 0x9ee5b0
// 009ee58c  8b4608               mov eax, dword ptr [esi + 8]
// 009ee58f  99                   cdq 
// 009ee590  83e207               and edx, 7
// 009ee593  03c2                 add eax, edx
// 009ee595  c1f803               sar eax, 3
// 009ee598  83f804               cmp eax, 4
// 009ee59b  7d07                 jge 0x9ee5a4
// 009ee59d  b804000000           mov eax, 4
// 009ee5a2  eb0c                 jmp 0x9ee5b0
// 009ee5a4  3d00040000           cmp eax, 0x400
// 009ee5a9  7e05                 jle 0x9ee5b0
// 009ee5ab  b800040000           mov eax, 0x400
// 009ee5b0  8d3c01               lea edi, [ecx + eax]
// 009ee5b3  3bdf                 cmp ebx, edi
// 009ee5b5  7d06                 jge 0x9ee5bd
// 009ee5b7  897c2414             mov dword ptr [esp + 0x14], edi
// 009ee5bb  eb06                 jmp 0x9ee5c3
// 009ee5bd  895c2414             mov dword ptr [esp + 0x14], ebx
// 009ee5c1  8bfb                 mov edi, ebx
// 009ee5c3  3bf9                 cmp edi, ecx
// 009ee5c5  7d05                 jge 0x9ee5cc
// 009ee5c7  e8f43df9ff           call 0x9823c0
// 009ee5cc  8d3cbf               lea edi, [edi + edi*4]
// 009ee5cf  03ff                 add edi, edi
// 009ee5d1  03ff                 add edi, edi
// 009ee5d3  57                   push edi
// 009ee5d4  e8173ef9ff           call 0x9823f0
// 009ee5d9  8b4e04               mov ecx, dword ptr [esi + 4]
// 009ee5dc  8be8                 mov ebp, eax
// 009ee5de  8b4608               mov eax, dword ptr [esi + 8]
// 009ee5e1  8d0480               lea eax, [eax + eax*4]
// 009ee5e4  03c0                 add eax, eax
// 009ee5e6  03c0                 add eax, eax
// 009ee5e8  50                   push eax
// 009ee5e9  51                   push ecx
// 009ee5ea  57                   push edi
// 009ee5eb  55                   push ebp
// 009ee5ec  e8df5ba1ff           call 0x4041d0
// 009ee5f1  8b4e08               mov ecx, dword ptr [esi + 8]
// 009ee5f4  8bc3                 mov eax, ebx
// 009ee5f6  2bc1                 sub eax, ecx
// 009ee5f8  8d1480               lea edx, [eax + eax*4]
// 009ee5fb  03d2                 add edx, edx
// 009ee5fd  03d2                 add edx, edx
// 009ee5ff  52                   push edx
// 009ee600  8d0489               lea eax, [ecx + ecx*4]
// 009ee603  8d4c8500             lea ecx, [ebp + eax*4]
// 009ee607  6a00                 push 0
// 009ee609  51                   push ecx
// 009ee60a  e8654df9ff           call 0x983374
// 009ee60f  8b5604               mov edx, dword ptr [esi + 4]
// 009ee612  52                   push edx
// 009ee613  e8a23df9ff           call 0x9823ba
// 009ee618  8b442438             mov eax, dword ptr [esp + 0x38]
// 009ee61c  83c424               add esp, 0x24
// 009ee61f  896e04               mov dword ptr [esi + 4], ebp
// 009ee622  89460c               mov dword ptr [esi + 0xc], eax
// 009ee625  5d                   pop ebp
// 009ee626  5f                   pop edi
// 009ee627  895e08               mov dword ptr [esi + 8], ebx
// 009ee62a  5e                   pop esi
// 009ee62b  5b                   pop ebx
// 009ee62c  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetSize@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
