// roc 2007-03 0056fa90  unit: seg_00560000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056fa90
//
// 0056fa90  c7017c647800         mov dword ptr [ecx], 0x78647c
// 0056fa96  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
