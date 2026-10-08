// roc 2007-03 004ba280  unit: seg_004b0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ba280
//
// 004ba280  56                   push esi
// 004ba281  8bf1                 mov esi, ecx
// 004ba283  8b06                 mov eax, dword ptr [esi]
// 004ba285  57                   push edi
// 004ba286  33ff                 xor edi, edi
// 004ba288  3bc7                 cmp eax, edi
// 004ba28a  7451                 je 0x4ba2dd
// 004ba28c  83f801               cmp eax, 1
// 004ba28f  7517                 jne 0x4ba2a8
// 004ba291  8b4604               mov eax, dword ptr [esi + 4]
// 004ba294  50                   push eax
// 004ba295  e8563e1600           call 0x61e0f0
// 004ba29a  83c404               add esp, 4
// 004ba29d  897e04               mov dword ptr [esi + 4], edi
// 004ba2a0  893e                 mov dword ptr [esi], edi
// 004ba2a2  897e08               mov dword ptr [esi + 8], edi
// 004ba2a5  5f                   pop edi
// 004ba2a6  5e                   pop esi
// 004ba2a7  c3                   ret 
// 004ba2a8  8b4608               mov eax, dword ptr [esi + 8]
// 004ba2ab  8b4804               mov ecx, dword ptr [eax + 4]
// 004ba2ae  8b5008               mov edx, dword ptr [eax + 8]
// 004ba2b1  895108               mov dword ptr [ecx + 8], edx
// 004ba2b4  8b4608               mov eax, dword ptr [esi + 8]
// 004ba2b7  8b4808               mov ecx, dword ptr [eax + 8]
// 004ba2ba  8b5004               mov edx, dword ptr [eax + 4]
// 004ba2bd  895104               mov dword ptr [ecx + 4], edx
// 004ba2c0  8b4608               mov eax, dword ptr [esi + 8]
// 004ba2c3  3b4604               cmp eax, dword ptr [esi + 4]
// 004ba2c6  8b7808               mov edi, dword ptr [eax + 8]
// 004ba2c9  7503                 jne 0x4ba2ce
// 004ba2cb  897e04               mov dword ptr [esi + 4], edi
// 004ba2ce  50                   push eax
// 004ba2cf  e81c3e1600           call 0x61e0f0
// 004ba2d4  83c404               add esp, 4
// 004ba2d7  8306ff               add dword ptr [esi], -1
// 004ba2da  897e08               mov dword ptr [esi + 8], edi
// 004ba2dd  5f                   pop edi
// 004ba2de  5e                   pop esi
// 004ba2df  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Del@?$CircularLinkedList@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
