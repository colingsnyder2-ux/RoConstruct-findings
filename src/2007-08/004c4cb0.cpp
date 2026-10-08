// roc 2007-08 004c4cb0  unit: RakPeer  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4cb0
//
// 004c4cb0  56                   push esi
// 004c4cb1  8bf1                 mov esi, ecx
// 004c4cb3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004c4cb7  752d                 jne 0x4c4ce6
// 004c4cb9  6a40                 push 0x40
// 004c4cbb  e836b21600           call 0x62fef6
// 004c4cc0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c4cc4  8906                 mov dword ptr [esi], eax
// 004c4cc6  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4ccd  c7460801000000       mov dword ptr [esi + 8], 1
// 004c4cd4  8b11                 mov edx, dword ptr [ecx]
// 004c4cd6  83c404               add esp, 4
// 004c4cd9  8910                 mov dword ptr [eax], edx
// 004c4cdb  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004c4ce2  5e                   pop esi
// 004c4ce3  c20400               ret 4
// 004c4ce6  8b4608               mov eax, dword ptr [esi + 8]
// 004c4ce9  8b542408             mov edx, dword ptr [esp + 8]
// 004c4ced  8b0e                 mov ecx, dword ptr [esi]
// 004c4cef  8b12                 mov edx, dword ptr [edx]
// 004c4cf1  891481               mov dword ptr [ecx + eax*4], edx
// 004c4cf4  83460801             add dword ptr [esi + 8], 1
// 004c4cf8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4cfb  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4cfe  3bc8                 cmp ecx, eax
// 004c4d00  7507                 jne 0x4c4d09
// 004c4d02  c7460800000000       mov dword ptr [esi + 8], 0
// 004c4d09  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c4d0c  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004c4d0f  7560                 jne 0x4c4d71
// 004c4d11  33c9                 xor ecx, ecx
// 004c4d13  03c0                 add eax, eax
// 004c4d15  ba04000000           mov edx, 4
// 004c4d1a  f7e2                 mul edx
// 004c4d1c  0f90c1               seto cl
// 004c4d1f  57                   push edi
// 004c4d20  f7d9                 neg ecx
// 004c4d22  0bc8                 or ecx, eax
// 004c4d24  51                   push ecx
// 004c4d25  e8ccb11600           call 0x62fef6
// 004c4d2a  33c9                 xor ecx, ecx
// 004c4d2c  83c404               add esp, 4
// 004c4d2f  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004c4d32  8bf8                 mov edi, eax
// 004c4d34  761b                 jbe 0x4c4d51
// 004c4d36  8b4604               mov eax, dword ptr [esi + 4]
// 004c4d39  03c1                 add eax, ecx
// 004c4d3b  33d2                 xor edx, edx
// 004c4d3d  f7760c               div dword ptr [esi + 0xc]
// 004c4d40  8b06                 mov eax, dword ptr [esi]
// 004c4d42  83c101               add ecx, 1
// 004c4d45  8b1490               mov edx, dword ptr [eax + edx*4]
// 004c4d48  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004c4d4c  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004c4d4f  72e5                 jb 0x4c4d36
// 004c4d51  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c4d54  8b0e                 mov ecx, dword ptr [esi]
// 004c4d56  894608               mov dword ptr [esi + 8], eax
// 004c4d59  03c0                 add eax, eax
// 004c4d5b  51                   push ecx
// 004c4d5c  c7460400000000       mov dword ptr [esi + 4], 0
// 004c4d63  89460c               mov dword ptr [esi + 0xc], eax
// 004c4d66  e8f7ae1600           call 0x62fc62
// 004c4d6b  83c404               add esp, 4
// 004c4d6e  893e                 mov dword ptr [esi], edi
// 004c4d70  5f                   pop edi
// 004c4d71  5e                   pop esi
// 004c4d72  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Push@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
