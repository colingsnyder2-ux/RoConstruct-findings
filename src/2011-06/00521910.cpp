// roc 2011-06 00521910  unit: RBX::Network::ProfiledRakPeer  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521910
//
// 00521910  56                   push esi
// 00521911  8bf1                 mov esi, ecx
// 00521913  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00521917  7541                 jne 0x52195a
// 00521919  33c9                 xor ecx, ecx
// 0052191b  b810000000           mov eax, 0x10
// 00521920  ba04000000           mov edx, 4
// 00521925  f7e2                 mul edx
// 00521927  0f90c1               seto cl
// 0052192a  f7d9                 neg ecx
// 0052192c  0bc8                 or ecx, eax
// 0052192e  51                   push ecx
// 0052192f  e80c8a2e00           call 0x80a340
// 00521934  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00521938  8906                 mov dword ptr [esi], eax
// 0052193a  c7460400000000       mov dword ptr [esi + 4], 0
// 00521941  c7460801000000       mov dword ptr [esi + 8], 1
// 00521948  8b11                 mov edx, dword ptr [ecx]
// 0052194a  83c404               add esp, 4
// 0052194d  8910                 mov dword ptr [eax], edx
// 0052194f  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 00521956  5e                   pop esi
// 00521957  c20c00               ret 0xc
// 0052195a  8b4608               mov eax, dword ptr [esi + 8]
// 0052195d  8b542408             mov edx, dword ptr [esp + 8]
// 00521961  8b0e                 mov ecx, dword ptr [esi]
// 00521963  8b12                 mov edx, dword ptr [edx]
// 00521965  891481               mov dword ptr [ecx + eax*4], edx
// 00521968  ff4608               inc dword ptr [esi + 8]
// 0052196b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052196e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00521971  3bc8                 cmp ecx, eax
// 00521973  7507                 jne 0x52197c
// 00521975  c7460800000000       mov dword ptr [esi + 8], 0
// 0052197c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052197f  3b4e04               cmp ecx, dword ptr [esi + 4]
// 00521982  7565                 jne 0x5219e9
// 00521984  03c0                 add eax, eax
// 00521986  7461                 je 0x5219e9
// 00521988  33c9                 xor ecx, ecx
// 0052198a  ba04000000           mov edx, 4
// 0052198f  f7e2                 mul edx
// 00521991  0f90c1               seto cl
// 00521994  57                   push edi
// 00521995  f7d9                 neg ecx
// 00521997  0bc8                 or ecx, eax
// 00521999  51                   push ecx
// 0052199a  e8a1892e00           call 0x80a340
// 0052199f  8bf8                 mov edi, eax
// 005219a1  83c404               add esp, 4
// 005219a4  85ff                 test edi, edi
// 005219a6  7440                 je 0x5219e8
// 005219a8  33c9                 xor ecx, ecx
// 005219aa  394e0c               cmp dword ptr [esi + 0xc], ecx
// 005219ad  761a                 jbe 0x5219c9
// 005219af  90                   nop 
// 005219b0  8b4604               mov eax, dword ptr [esi + 4]
// 005219b3  03c1                 add eax, ecx
// 005219b5  33d2                 xor edx, edx
// 005219b7  f7760c               div dword ptr [esi + 0xc]
// 005219ba  8b06                 mov eax, dword ptr [esi]
// 005219bc  41                   inc ecx
// 005219bd  8b1490               mov edx, dword ptr [eax + edx*4]
// 005219c0  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 005219c4  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 005219c7  72e7                 jb 0x5219b0
// 005219c9  8b460c               mov eax, dword ptr [esi + 0xc]
// 005219cc  8b0e                 mov ecx, dword ptr [esi]
// 005219ce  894608               mov dword ptr [esi + 8], eax
// 005219d1  03c0                 add eax, eax
// 005219d3  51                   push ecx
// 005219d4  c7460400000000       mov dword ptr [esi + 4], 0
// 005219db  89460c               mov dword ptr [esi + 0xc], eax
// 005219de  e821892e00           call 0x80a304
// 005219e3  83c404               add esp, 4
// 005219e6  893e                 mov dword ptr [esi], edi
// 005219e8  5f                   pop edi
// 005219e9  5e                   pop esi
// 005219ea  c20c00               ret 0xc
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Push@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
