// roc 2009-06 004f5400  unit: RBX::Network::ClientReplicator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5400
//
// 004f5400  8b5104               mov edx, dword ptr [ecx + 4]
// 004f5403  56                   push esi
// 004f5404  8b7108               mov esi, dword ptr [ecx + 8]
// 004f5407  3bd6                 cmp edx, esi
// 004f5409  7706                 ja 0x4f5411
// 004f540b  8bc6                 mov eax, esi
// 004f540d  2bc2                 sub eax, edx
// 004f540f  5e                   pop esi
// 004f5410  c3                   ret 
// 004f5411  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004f5414  2bc2                 sub eax, edx
// 004f5416  03c6                 add eax, esi
// 004f5418  5e                   pop esi
// 004f5419  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Size@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
