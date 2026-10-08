// roc 2007-03 005a2d80  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2d80
//
// 005a2d80  c70160537b00         mov dword ptr [ecx], 0x7b5360
// 005a2d86  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
