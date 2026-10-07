// roc 2009-06 004f5ca0  unit: RBX::Network::ClientReplicator  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5ca0
//
// 004f5ca0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004f5ca4  7609                 jbe 0x4f5caf
// 004f5ca6  8b01                 mov eax, dword ptr [ecx]
// 004f5ca8  50                   push eax
// 004f5ca9  e830302200           call 0x718cde
// 004f5cae  59                   pop ecx
// 004f5caf  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
