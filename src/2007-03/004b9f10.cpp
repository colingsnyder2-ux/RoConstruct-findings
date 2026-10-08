// roc 2007-03 004b9f10  unit: seg_004b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9f10
//
// 004b9f10  8b5104               mov edx, dword ptr [ecx + 4]
// 004b9f13  56                   push esi
// 004b9f14  8b7108               mov esi, dword ptr [ecx + 8]
// 004b9f17  3bd6                 cmp edx, esi
// 004b9f19  7706                 ja 0x4b9f21
// 004b9f1b  8bc6                 mov eax, esi
// 004b9f1d  2bc2                 sub eax, edx
// 004b9f1f  5e                   pop esi
// 004b9f20  c3                   ret 
// 004b9f21  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004b9f24  2bc2                 sub eax, edx
// 004b9f26  03c6                 add eax, esi
// 004b9f28  5e                   pop esi
// 004b9f29  c3                   ret 
// library rbxgs-raknet/ConnectionGraph.cpp (function ?Size@?$Queue@USystemAddressAndGroupId@ConnectionGraph@@@DataStructures@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ConnectionGraph.cpp
