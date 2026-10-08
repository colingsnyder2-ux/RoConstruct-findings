// roc 2007-03 004c1ef0  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1ef0
//
// 004c1ef0  c7018ce57900         mov dword ptr [ecx], 0x79e58c
// 004c1ef6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
