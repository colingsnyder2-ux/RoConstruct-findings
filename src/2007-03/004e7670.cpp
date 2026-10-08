// roc 2007-03 004e7670  unit: seg_004e0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7670
//
// 004e7670  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7674  e967eff8ff           jmp 0x4765e0
// library rbxgs/humanoid\FallingDown.cpp (function ??$increment@Vnamed_slot_map_iterator@detail@signals@boost@@@iterator_core_access@boost@@CAXAAVnamed_slot_map_iterator@detail@signals@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
