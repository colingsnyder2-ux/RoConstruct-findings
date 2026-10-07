// roc 2011-06 00520670  unit: RBX::Network::ProfiledRakPeer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00520670
//
// 00520670  8b5104               mov edx, dword ptr [ecx + 4]
// 00520673  56                   push esi
// 00520674  8b7108               mov esi, dword ptr [ecx + 8]
// 00520677  3bd6                 cmp edx, esi
// 00520679  7706                 ja 0x520681
// 0052067b  8bc6                 mov eax, esi
// 0052067d  2bc2                 sub eax, edx
// 0052067f  5e                   pop esi
// 00520680  c3                   ret 
// 00520681  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00520684  2bc2                 sub eax, edx
// 00520686  03c6                 add eax, esi
// 00520688  5e                   pop esi
// 00520689  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ?Size@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
