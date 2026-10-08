// roc 2007-03 004fba50  unit: seg_004f0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fba50
//
// 004fba50  c70144fd7900         mov dword ptr [ecx], 0x79fd44
// 004fba56  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
