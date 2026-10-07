// roc 2012-06 0059afd0  unit: VAuthoringSettings::?$FactoryProduct  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059afd0
//
// 0059afd0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0059afd4  7609                 jbe 0x59afdf
// 0059afd6  8b01                 mov eax, dword ptr [ecx]
// 0059afd8  50                   push eax
// 0059afd9  e8dc733e00           call 0x9823ba
// 0059afde  59                   pop ecx
// 0059afdf  c3                   ret 
// library rbx2016-raknet/DS_HuffmanEncodingTree.cpp (function ??1?$Queue@PAUHuffmanEncodingTreeNode@@@DataStructures@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet DS_HuffmanEncodingTree.cpp
