// roc 2007-03 004b9b90  unit: seg_004b0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9b90
//
// 004b9b90  56                   push esi
// 004b9b91  8bf1                 mov esi, ecx
// 004b9b93  33c9                 xor ecx, ecx
// 004b9b95  b810000000           mov eax, 0x10
// 004b9b9a  89460c               mov dword ptr [esi + 0xc], eax
// 004b9b9d  ba04000000           mov edx, 4
// 004b9ba2  f7e2                 mul edx
// 004b9ba4  0f90c1               seto cl
// 004b9ba7  f7d9                 neg ecx
// 004b9ba9  0bc8                 or ecx, eax
// 004b9bab  51                   push ecx
// 004b9bac  e857451600           call 0x61e108
// 004b9bb1  8906                 mov dword ptr [esi], eax
// 004b9bb3  33c0                 xor eax, eax
// 004b9bb5  894604               mov dword ptr [esi + 4], eax
// 004b9bb8  894608               mov dword ptr [esi + 8], eax
// 004b9bbb  83c404               add esp, 4
// 004b9bbe  8bc6                 mov eax, esi
// 004b9bc0  5e                   pop esi
// 004b9bc1  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
