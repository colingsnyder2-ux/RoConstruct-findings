// roc 2007-03 00533a80  unit: seg_00530000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533a80
//
// 00533a80  c701946d7900         mov dword ptr [ecx], 0x796d94
// 00533a86  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
