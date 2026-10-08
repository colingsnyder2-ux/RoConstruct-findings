// roc 2007-03 004180e0  unit: seg_00410000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004180e0
//
// 004180e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004180e4  e9e7f9ffff           jmp 0x417ad0
// library rbxgs/humanoid\FallingDown.cpp (function ??$increment@Vnamed_slot_map_iterator@detail@signals@boost@@@iterator_core_access@boost@@CAXAAVnamed_slot_map_iterator@detail@signals@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
