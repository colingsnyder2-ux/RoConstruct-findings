// roc 2007-03 004a43a0  unit: seg_004a0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a43a0
//
// 004a43a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a43a4  e9b7e4ffff           jmp 0x4a2860
// library rbxgs/humanoid\FallingDown.cpp (function ??$increment@Vnamed_slot_map_iterator@detail@signals@boost@@@iterator_core_access@boost@@CAXAAVnamed_slot_map_iterator@detail@signals@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
