// roc 2008-06 004cf0a0  unit: RBX::Network::PhysicsSender  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf0a0
//
// 004cf0a0  8b5104               mov edx, dword ptr [ecx + 4]
// 004cf0a3  56                   push esi
// 004cf0a4  8b7108               mov esi, dword ptr [ecx + 8]
// 004cf0a7  3bd6                 cmp edx, esi
// 004cf0a9  7706                 ja 0x4cf0b1
// 004cf0ab  8bc6                 mov eax, esi
// 004cf0ad  2bc2                 sub eax, edx
// 004cf0af  5e                   pop esi
// 004cf0b0  c3                   ret 
// 004cf0b1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004cf0b4  2bc2                 sub eax, edx
// 004cf0b6  03c6                 add eax, esi
// 004cf0b8  5e                   pop esi
// 004cf0b9  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Size@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
