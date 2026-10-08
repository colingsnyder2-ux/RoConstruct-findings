// roc 2007-03 0048b5d0  unit: seg_00480000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048b5d0
//
// 0048b5d0  c701fca77900         mov dword ptr [ecx], 0x79a7fc
// 0048b5d6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
