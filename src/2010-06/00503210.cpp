// roc 2010-06 00503210  unit: RBX::Network::ClientReplicator  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00503210
//
// 00503210  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00503214  7609                 jbe 0x50321f
// 00503216  8b01                 mov eax, dword ptr [ecx]
// 00503218  50                   push eax
// 00503219  e8284a2a00           call 0x7a7c46
// 0050321e  59                   pop ecx
// 0050321f  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
