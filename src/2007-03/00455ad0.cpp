// roc 2007-03 00455ad0  unit: seg_00450000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455ad0
//
// 00455ad0  c701c01f7900         mov dword ptr [ecx], 0x791fc0
// 00455ad6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
