// roc 2009-12 00553b10  unit: RBX::Network::ClientReplicator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00553b10
//
// 00553b10  56                   push esi
// 00553b11  8bf1                 mov esi, ecx
// 00553b13  33c9                 xor ecx, ecx
// 00553b15  b810000000           mov eax, 0x10
// 00553b1a  89460c               mov dword ptr [esi + 0xc], eax
// 00553b1d  ba04000000           mov edx, 4
// 00553b22  f7e2                 mul edx
// 00553b24  0f90c1               seto cl
// 00553b27  f7d9                 neg ecx
// 00553b29  0bc8                 or ecx, eax
// 00553b2b  51                   push ecx
// 00553b2c  e811002a00           call 0x7f3b42
// 00553b31  8906                 mov dword ptr [esi], eax
// 00553b33  33c0                 xor eax, eax
// 00553b35  894604               mov dword ptr [esi + 4], eax
// 00553b38  894608               mov dword ptr [esi + 8], eax
// 00553b3b  83c404               add esp, 4
// 00553b3e  8bc6                 mov eax, esi
// 00553b40  5e                   pop esi
// 00553b41  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
