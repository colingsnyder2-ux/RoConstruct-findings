// roc 2012-06 005bc540  unit: RakNet::RakPeer  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bc540
//
// 005bc540  56                   push esi
// 005bc541  8bf1                 mov esi, ecx
// 005bc543  837e0c00             cmp dword ptr [esi + 0xc], 0
// 005bc547  7541                 jne 0x5bc58a
// 005bc549  33c9                 xor ecx, ecx
// 005bc54b  b810000000           mov eax, 0x10
// 005bc550  ba04000000           mov edx, 4
// 005bc555  f7e2                 mul edx
// 005bc557  0f90c1               seto cl
// 005bc55a  f7d9                 neg ecx
// 005bc55c  0bc8                 or ecx, eax
// 005bc55e  51                   push ecx
// 005bc55f  e88c5e3c00           call 0x9823f0
// 005bc564  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bc568  8906                 mov dword ptr [esi], eax
// 005bc56a  c7460400000000       mov dword ptr [esi + 4], 0
// 005bc571  c7460801000000       mov dword ptr [esi + 8], 1
// 005bc578  8b11                 mov edx, dword ptr [ecx]
// 005bc57a  83c404               add esp, 4
// 005bc57d  8910                 mov dword ptr [eax], edx
// 005bc57f  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 005bc586  5e                   pop esi
// 005bc587  c20c00               ret 0xc
// 005bc58a  8b4608               mov eax, dword ptr [esi + 8]
// 005bc58d  8b542408             mov edx, dword ptr [esp + 8]
// 005bc591  8b0e                 mov ecx, dword ptr [esi]
// 005bc593  8b12                 mov edx, dword ptr [edx]
// 005bc595  891481               mov dword ptr [ecx + eax*4], edx
// 005bc598  ff4608               inc dword ptr [esi + 8]
// 005bc59b  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bc59e  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bc5a1  3bc8                 cmp ecx, eax
// 005bc5a3  7507                 jne 0x5bc5ac
// 005bc5a5  c7460800000000       mov dword ptr [esi + 8], 0
// 005bc5ac  8b4e08               mov ecx, dword ptr [esi + 8]
// 005bc5af  3b4e04               cmp ecx, dword ptr [esi + 4]
// 005bc5b2  7565                 jne 0x5bc619
// 005bc5b4  03c0                 add eax, eax
// 005bc5b6  7461                 je 0x5bc619
// 005bc5b8  33c9                 xor ecx, ecx
// 005bc5ba  ba04000000           mov edx, 4
// 005bc5bf  f7e2                 mul edx
// 005bc5c1  0f90c1               seto cl
// 005bc5c4  57                   push edi
// 005bc5c5  f7d9                 neg ecx
// 005bc5c7  0bc8                 or ecx, eax
// 005bc5c9  51                   push ecx
// 005bc5ca  e8215e3c00           call 0x9823f0
// 005bc5cf  8bf8                 mov edi, eax
// 005bc5d1  83c404               add esp, 4
// 005bc5d4  85ff                 test edi, edi
// 005bc5d6  7440                 je 0x5bc618
// 005bc5d8  33c9                 xor ecx, ecx
// 005bc5da  394e0c               cmp dword ptr [esi + 0xc], ecx
// 005bc5dd  761a                 jbe 0x5bc5f9
// 005bc5df  90                   nop 
// 005bc5e0  8b4604               mov eax, dword ptr [esi + 4]
// 005bc5e3  03c1                 add eax, ecx
// 005bc5e5  33d2                 xor edx, edx
// 005bc5e7  f7760c               div dword ptr [esi + 0xc]
// 005bc5ea  8b06                 mov eax, dword ptr [esi]
// 005bc5ec  41                   inc ecx
// 005bc5ed  8b1490               mov edx, dword ptr [eax + edx*4]
// 005bc5f0  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 005bc5f4  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 005bc5f7  72e7                 jb 0x5bc5e0
// 005bc5f9  8b460c               mov eax, dword ptr [esi + 0xc]
// 005bc5fc  8b0e                 mov ecx, dword ptr [esi]
// 005bc5fe  894608               mov dword ptr [esi + 8], eax
// 005bc601  03c0                 add eax, eax
// 005bc603  51                   push ecx
// 005bc604  c7460400000000       mov dword ptr [esi + 4], 0
// 005bc60b  89460c               mov dword ptr [esi + 0xc], eax
// 005bc60e  e8a75d3c00           call 0x9823ba
// 005bc613  83c404               add esp, 4
// 005bc616  893e                 mov dword ptr [esi], edi
// 005bc618  5f                   pop edi
// 005bc619  5e                   pop esi
// 005bc61a  c20c00               ret 0xc
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Push@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
