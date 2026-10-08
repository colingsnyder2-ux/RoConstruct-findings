// roc 2007-03 0054a5c0  unit: seg_00540000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a5c0
//
// 0054a5c0  c7014c797a00         mov dword ptr [ecx], 0x7a794c
// 0054a5c6  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
