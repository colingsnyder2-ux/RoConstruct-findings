// roc 2007-03 004ac740  unit: seg_004a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ac740
//
// 004ac740  c70184dd7900         mov dword ptr [ecx], 0x79dd84
// 004ac746  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
