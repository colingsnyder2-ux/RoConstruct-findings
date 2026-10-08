// roc 2007-03 004e2b30  unit: seg_004e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2b30
//
// 004e2b30  c7015ceb7900         mov dword ptr [ecx], 0x79eb5c
// 004e2b36  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
