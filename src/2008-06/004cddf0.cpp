// roc 2008-06 004cddf0  unit: RBX::Network::PhysicsSender  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cddf0
//
// 004cddf0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004cddf4  7609                 jbe 0x4cddff
// 004cddf6  8b01                 mov eax, dword ptr [ecx]
// 004cddf8  50                   push eax
// 004cddf9  e87c281d00           call 0x6a067a
// 004cddfe  59                   pop ecx
// 004cddff  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
