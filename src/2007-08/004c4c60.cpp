// roc 2007-08 004c4c60  unit: RakPeer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4c60
//
// 004c4c60  56                   push esi
// 004c4c61  8bf1                 mov esi, ecx
// 004c4c63  33c9                 xor ecx, ecx
// 004c4c65  b810000000           mov eax, 0x10
// 004c4c6a  89460c               mov dword ptr [esi + 0xc], eax
// 004c4c6d  ba04000000           mov edx, 4
// 004c4c72  f7e2                 mul edx
// 004c4c74  0f90c1               seto cl
// 004c4c77  f7d9                 neg ecx
// 004c4c79  0bc8                 or ecx, eax
// 004c4c7b  51                   push ecx
// 004c4c7c  e875b21600           call 0x62fef6
// 004c4c81  8906                 mov dword ptr [esi], eax
// 004c4c83  33c0                 xor eax, eax
// 004c4c85  894604               mov dword ptr [esi + 4], eax
// 004c4c88  894608               mov dword ptr [esi + 8], eax
// 004c4c8b  83c404               add esp, 4
// 004c4c8e  8bc6                 mov eax, esi
// 004c4c90  5e                   pop esi
// 004c4c91  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??0?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
