// roc 2007-03 005a2d20  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2d20
//
// 005a2d20  c70154537b00         mov dword ptr [ecx], 0x7b5354
// 005a2d26  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
