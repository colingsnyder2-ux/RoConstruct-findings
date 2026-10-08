// roc 2007-03 00712e70  unit: seg_00710000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00712e70
//
// 00712e70  c701d0f97d00         mov dword ptr [ecx], 0x7df9d0
// 00712e76  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
