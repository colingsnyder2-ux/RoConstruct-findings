// roc 2009-06 004f5c60  unit: RBX::Network::ClientReplicator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f5c60
//
// 004f5c60  56                   push esi
// 004f5c61  8bf1                 mov esi, ecx
// 004f5c63  33c9                 xor ecx, ecx
// 004f5c65  b810000000           mov eax, 0x10
// 004f5c6a  89460c               mov dword ptr [esi + 0xc], eax
// 004f5c6d  ba04000000           mov edx, 4
// 004f5c72  f7e2                 mul edx
// 004f5c74  0f90c1               seto cl
// 004f5c77  f7d9                 neg ecx
// 004f5c79  0bc8                 or ecx, eax
// 004f5c7b  51                   push ecx
// 004f5c7c  e899302200           call 0x718d1a
// 004f5c81  8906                 mov dword ptr [esi], eax
// 004f5c83  33c0                 xor eax, eax
// 004f5c85  894604               mov dword ptr [esi + 4], eax
// 004f5c88  894608               mov dword ptr [esi + 8], eax
// 004f5c8b  83c404               add esp, 4
// 004f5c8e  8bc6                 mov eax, esi
// 004f5c90  5e                   pop esi
// 004f5c91  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
