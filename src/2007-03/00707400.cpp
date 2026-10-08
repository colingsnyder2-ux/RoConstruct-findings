// roc 2007-03 00707400  unit: seg_00700000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00707400
//
// 00707400  c7017cde7d00         mov dword ptr [ecx], 0x7dde7c
// 00707406  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
