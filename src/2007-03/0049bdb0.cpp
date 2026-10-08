// roc 2007-03 0049bdb0  unit: seg_00490000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049bdb0
//
// 0049bdb0  c701ccc07900         mov dword ptr [ecx], 0x79c0cc
// 0049bdb6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
