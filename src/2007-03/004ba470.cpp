// roc 2007-03 004ba470  unit: seg_004b0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ba470
//
// 004ba470  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004ba474  7609                 jbe 0x4ba47f
// 004ba476  8b01                 mov eax, dword ptr [ecx]
// 004ba478  50                   push eax
// 004ba479  e8723c1600           call 0x61e0f0
// 004ba47e  59                   pop ecx
// 004ba47f  c3                   ret 
// library rbxgs-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_HuffmanEncodingTree.cpp
