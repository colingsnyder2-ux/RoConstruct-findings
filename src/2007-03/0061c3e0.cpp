// roc 2007-03 0061c3e0  unit: seg_00610000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061c3e0
//
// 0061c3e0  c70164507a00         mov dword ptr [ecx], 0x7a5064
// 0061c3e6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
