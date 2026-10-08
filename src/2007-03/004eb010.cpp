// roc 2007-03 004eb010  unit: seg_004e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb010
//
// 004eb010  c701d4ed7900         mov dword ptr [ecx], 0x79edd4
// 004eb016  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
