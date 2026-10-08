// roc 2007-03 005989e0  unit: seg_00590000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005989e0
//
// 005989e0  8b442408             mov eax, dword ptr [esp + 8]
// 005989e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005989e8  50                   push eax
// 005989e9  e862eeffff           call 0x597850
// 005989ee  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ??$equal@Vnamed_slot_map_iterator@detail@signals@boost@@V1234@@iterator_core_access@boost@@CA_NABVnamed_slot_map_iterator@detail@signals@1@0U?$bool_@$00@mpl@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
