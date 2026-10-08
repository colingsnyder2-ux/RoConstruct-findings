// roc 2008-06 004cede0  unit: RBX::Network::PhysicsSender  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cede0
//
// 004cede0  56                   push esi
// 004cede1  8bf1                 mov esi, ecx
// 004cede3  837e0c00             cmp dword ptr [esi + 0xc], 0
// 004cede7  752d                 jne 0x4cee16
// 004cede9  6a40                 push 0x40
// 004cedeb  e8301b1d00           call 0x6a0920
// 004cedf0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cedf4  8906                 mov dword ptr [esi], eax
// 004cedf6  c7460400000000       mov dword ptr [esi + 4], 0
// 004cedfd  c7460801000000       mov dword ptr [esi + 8], 1
// 004cee04  8b11                 mov edx, dword ptr [ecx]
// 004cee06  83c404               add esp, 4
// 004cee09  8910                 mov dword ptr [eax], edx
// 004cee0b  c7460c10000000       mov dword ptr [esi + 0xc], 0x10
// 004cee12  5e                   pop esi
// 004cee13  c20400               ret 4
// 004cee16  8b4608               mov eax, dword ptr [esi + 8]
// 004cee19  8b542408             mov edx, dword ptr [esp + 8]
// 004cee1d  8b0e                 mov ecx, dword ptr [esi]
// 004cee1f  8b12                 mov edx, dword ptr [edx]
// 004cee21  891481               mov dword ptr [ecx + eax*4], edx
// 004cee24  ff4608               inc dword ptr [esi + 8]
// 004cee27  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cee2a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cee2d  3bc8                 cmp ecx, eax
// 004cee2f  7507                 jne 0x4cee38
// 004cee31  c7460800000000       mov dword ptr [esi + 8], 0
// 004cee38  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cee3b  3b4e04               cmp ecx, dword ptr [esi + 4]
// 004cee3e  755e                 jne 0x4cee9e
// 004cee40  33c9                 xor ecx, ecx
// 004cee42  03c0                 add eax, eax
// 004cee44  ba04000000           mov edx, 4
// 004cee49  f7e2                 mul edx
// 004cee4b  0f90c1               seto cl
// 004cee4e  57                   push edi
// 004cee4f  f7d9                 neg ecx
// 004cee51  0bc8                 or ecx, eax
// 004cee53  51                   push ecx
// 004cee54  e8c71a1d00           call 0x6a0920
// 004cee59  33c9                 xor ecx, ecx
// 004cee5b  83c404               add esp, 4
// 004cee5e  8bf8                 mov edi, eax
// 004cee60  394e0c               cmp dword ptr [esi + 0xc], ecx
// 004cee63  7619                 jbe 0x4cee7e
// 004cee65  8b4604               mov eax, dword ptr [esi + 4]
// 004cee68  03c1                 add eax, ecx
// 004cee6a  33d2                 xor edx, edx
// 004cee6c  f7760c               div dword ptr [esi + 0xc]
// 004cee6f  8b06                 mov eax, dword ptr [esi]
// 004cee71  41                   inc ecx
// 004cee72  8b1490               mov edx, dword ptr [eax + edx*4]
// 004cee75  89548ffc             mov dword ptr [edi + ecx*4 - 4], edx
// 004cee79  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 004cee7c  72e7                 jb 0x4cee65
// 004cee7e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004cee81  8b0e                 mov ecx, dword ptr [esi]
// 004cee83  894608               mov dword ptr [esi + 8], eax
// 004cee86  03c0                 add eax, eax
// 004cee88  51                   push ecx
// 004cee89  c7460400000000       mov dword ptr [esi + 4], 0
// 004cee90  89460c               mov dword ptr [esi + 0xc], eax
// 004cee93  e8e2171d00           call 0x6a067a
// 004cee98  83c404               add esp, 4
// 004cee9b  893e                 mov dword ptr [esi], edi
// 004cee9d  5f                   pop edi
// 004cee9e  5e                   pop esi
// 004cee9f  c20400               ret 4
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ?Push@?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAEXABQAUHuffmanEncodingTreeNode@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
