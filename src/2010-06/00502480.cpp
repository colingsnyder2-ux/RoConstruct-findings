// roc 2010-06 00502480  unit: RBX::Network::ClientReplicator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00502480
//
// 00502480  56                   push esi
// 00502481  8bf1                 mov esi, ecx
// 00502483  33c9                 xor ecx, ecx
// 00502485  b810000000           mov eax, 0x10
// 0050248a  89460c               mov dword ptr [esi + 0xc], eax
// 0050248d  ba04000000           mov edx, 4
// 00502492  f7e2                 mul edx
// 00502494  0f90c1               seto cl
// 00502497  f7d9                 neg ecx
// 00502499  0bc8                 or ecx, eax
// 0050249b  51                   push ecx
// 0050249c  e8e1572a00           call 0x7a7c82
// 005024a1  8906                 mov dword ptr [esi], eax
// 005024a3  33c0                 xor eax, eax
// 005024a5  894604               mov dword ptr [esi + 4], eax
// 005024a8  894608               mov dword ptr [esi + 8], eax
// 005024ab  83c404               add esp, 4
// 005024ae  8bc6                 mov eax, esi
// 005024b0  5e                   pop esi
// 005024b1  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
