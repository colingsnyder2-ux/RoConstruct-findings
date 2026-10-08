// roc 2007-03 006b50a0  unit: seg_006b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b50a0
//
// 006b50a0  c70110487d00         mov dword ptr [ecx], 0x7d4810
// 006b50a6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
