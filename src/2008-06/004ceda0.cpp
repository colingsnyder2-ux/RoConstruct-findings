// roc 2008-06 004ceda0  unit: RBX::Network::PhysicsSender  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ceda0
//
// 004ceda0  56                   push esi
// 004ceda1  8bf1                 mov esi, ecx
// 004ceda3  33c9                 xor ecx, ecx
// 004ceda5  b810000000           mov eax, 0x10
// 004cedaa  89460c               mov dword ptr [esi + 0xc], eax
// 004cedad  ba04000000           mov edx, 4
// 004cedb2  f7e2                 mul edx
// 004cedb4  0f90c1               seto cl
// 004cedb7  f7d9                 neg ecx
// 004cedb9  0bc8                 or ecx, eax
// 004cedbb  51                   push ecx
// 004cedbc  e85f1b1d00           call 0x6a0920
// 004cedc1  8906                 mov dword ptr [esi], eax
// 004cedc3  33c0                 xor eax, eax
// 004cedc5  894604               mov dword ptr [esi + 4], eax
// 004cedc8  894608               mov dword ptr [esi + 8], eax
// 004cedcb  83c404               add esp, 4
// 004cedce  8bc6                 mov eax, esi
// 004cedd0  5e                   pop esi
// 004cedd1  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
