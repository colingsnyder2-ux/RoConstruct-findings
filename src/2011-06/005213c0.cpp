// roc 2011-06 005213c0  unit: RBX::Network::ProfiledRakPeer  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005213c0
//
// 005213c0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 005213c4  7609                 jbe 0x5213cf
// 005213c6  8b01                 mov eax, dword ptr [ecx]
// 005213c8  50                   push eax
// 005213c9  e8368f2e00           call 0x80a304
// 005213ce  59                   pop ecx
// 005213cf  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
