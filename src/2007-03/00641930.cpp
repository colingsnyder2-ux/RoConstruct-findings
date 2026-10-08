// roc 2007-03 00641930  unit: seg_00640000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00641930
//
// 00641930  c701d0547c00         mov dword ptr [ecx], 0x7c54d0
// 00641936  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
