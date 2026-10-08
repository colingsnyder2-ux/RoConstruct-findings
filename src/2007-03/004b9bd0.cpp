// roc 2007-03 004b9bd0  unit: seg_004b0000  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9bd0
//
// 004b9bd0  56                   push esi
// 004b9bd1  8bf1                 mov esi, ecx
// 004b9bd3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004b9bd7  752d                 jne 0x4b9c06
// 004b9bd9  6a40                 push 0x40
// 004b9bdb  e828451600           call 0x61e108
// 004b9be0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b9be4  8906                 mov dword ptr [esi], eax
// 004b9be6  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9bed  c7460801000000       mov dword ptr [esi + 8], 1
// 004b9bf4  8b11                 mov edx, dword ptr [ecx]
// 004b9bf6  83c404               add esp, 4
// 004b9bf9  8910                 mov dword ptr [eax], edx
// 004b9bfb  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004b9c02  5e                   pop esi
// 004b9c03  c20400               ret 4
// 004b9c06  8b4608               mov eax, dword ptr [esi + 8]
// 004b9c09  8b542408             mov edx, dword ptr [esp + 8]
// 004b9c0d  8b0e                 mov ecx, dword ptr [esi]
// 004b9c0f  8b12                 mov edx, dword ptr [edx]
// 004b9c11  891481               mov dword ptr [ecx + eax*4], edx
// 004b9c14  83460801             add dword ptr [esi + 8], 1
// 004b9c18  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9c1b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9c1e  3bc8                 cmp ecx, eax
// 004b9c20  7507                 jne 0x4b9c29
// 004b9c22  c7460800000000       mov dword ptr [esi + 8], 0
// 004b9c29  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9c2c  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004b9c2f  7560                 jne 0x4b9c91
// 004b9c31  33c9                 xor ecx, ecx
// 004b9c33  03c0                 add eax, eax
// 004b9c35  ba04000000           mov edx, 4
// 004b9c3a  f7e2                 mul edx
// 004b9c3c  0f90c1               seto cl
// 004b9c3f  57                   push edi
// 004b9c40  f7d9                 neg ecx
// 004b9c42  0bc8                 or ecx, eax
// 004b9c44  51                   push ecx
// 004b9c45  e8be441600           call 0x61e108
// 004b9c4a  33c9                 xor ecx, ecx
// 004b9c4c  83c404               add esp, 4
// 004b9c4f  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004b9c52  8bf8                 mov edi, eax
// 004b9c54  761b                 jbe 0x4b9c71
// 004b9c56  8b4604               mov eax, dword ptr [esi + 4]
// 004b9c59  03c1                 add eax, ecx
// 004b9c5b  33d2                 xor edx, edx
// 004b9c5d  f7760c               div dword ptr [esi + 0xc]
// 004b9c60  8b06                 mov eax, dword ptr [esi]
// 004b9c62  83c101               add ecx, 1
// 004b9c65  8b1490               mov edx, dword ptr [eax + edx*4]
// 004b9c68  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004b9c6c  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004b9c6f  72e5                 jb 0x4b9c56
// 004b9c71  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b9c74  8b0e                 mov ecx, dword ptr [esi]
// 004b9c76  894608               mov dword ptr [esi + 8], eax
// 004b9c79  03c0                 add eax, eax
// 004b9c7b  51                   push ecx
// 004b9c7c  c7460400000000       mov dword ptr [esi + 4], 0
// 004b9c83  89460c               mov dword ptr [esi + 0xc], eax
// 004b9c86  e865441600           call 0x61e0f0
// 004b9c8b  83c404               add esp, 4
// 004b9c8e  893e                 mov dword ptr [esi], edi
// 004b9c90  5f                   pop edi
// 004b9c91  5e                   pop esi
// 004b9c92  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Push@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
