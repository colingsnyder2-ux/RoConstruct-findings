// roc 2007-03 0051ebe0  unit: seg_00510000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ebe0
//
// 0051ebe0  c7016c447a00         mov dword ptr [ecx], 0x7a446c
// 0051ebe6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
