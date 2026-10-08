// roc 2007-03 005426b0  unit: seg_00540000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005426b0
//
// 005426b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005426b4  e907fbffff           jmp 0x5421c0
// library rbxgs/humanoid\FallingDown.cpp (function ??$increment@Vnamed_slot_map_iterator@detail@signals@boost@@@iterator_core_access@boost@@CAXAAVnamed_slot_map_iterator@detail@signals@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
