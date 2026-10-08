// roc 2007-03 0068c510  unit: seg_00680000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c510
//
// 0068c510  c701ecff7c00         mov dword ptr [ecx], 0x7cffec
// 0068c516  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
