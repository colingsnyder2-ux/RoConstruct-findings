// roc 2010-06 005150f0  unit: RakPeer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005150f0
//
// 005150f0  8b5104               mov edx, dword ptr [ecx + 4]
// 005150f3  56                   push esi
// 005150f4  8b7108               mov esi, dword ptr [ecx + 8]
// 005150f7  3bd6                 cmp edx, esi
// 005150f9  7706                 ja 0x515101
// 005150fb  8bc6                 mov eax, esi
// 005150fd  2bc2                 sub eax, edx
// 005150ff  5e                   pop esi
// 00515100  c3                   ret 
// 00515101  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00515104  2bc2                 sub eax, edx
// 00515106  03c6                 add eax, esi
// 00515108  5e                   pop esi
// 00515109  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Size@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
