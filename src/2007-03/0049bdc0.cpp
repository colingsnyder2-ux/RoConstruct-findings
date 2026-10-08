// roc 2007-03 0049bdc0  unit: seg_00490000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bdc0
//
// 0049bdc0  c701d8c07900         mov dword ptr [ecx], 0x79c0d8
// 0049bdc6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
