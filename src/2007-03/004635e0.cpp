// roc 2007-03 004635e0  unit: seg_00460000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004635e0
//
// 004635e0  c701704f7900         mov dword ptr [ecx], 0x794f70
// 004635e6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
