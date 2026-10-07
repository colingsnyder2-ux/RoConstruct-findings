// roc 2012-06 0059a750  unit: RBX::Network::Marker  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a750
//
// 0059a750  8b5104               mov edx, dword ptr [ecx + 4]
// 0059a753  56                   push esi
// 0059a754  8b7108               mov esi, dword ptr [ecx + 8]
// 0059a757  3bd6                 cmp edx, esi
// 0059a759  7706                 ja 0x59a761
// 0059a75b  8bc6                 mov eax, esi
// 0059a75d  2bc2                 sub eax, edx
// 0059a75f  5e                   pop esi
// 0059a760  c3                   ret 
// 0059a761  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0059a764  2bc2                 sub eax, edx
// 0059a766  03c6                 add eax, esi
// 0059a768  5e                   pop esi
// 0059a769  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Size@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
