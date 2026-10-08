// roc 2007-03 00606920  unit: seg_00600000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00606920
//
// 00606920  c701b0177c00         mov dword ptr [ecx], 0x7c17b0
// 00606926  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
