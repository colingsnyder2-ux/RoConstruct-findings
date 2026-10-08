// roc 2007-03 0041e440  unit: seg_00410000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041e440
//
// 0041e440  c7013c6f7800         mov dword ptr [ecx], 0x786f3c
// 0041e446  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
