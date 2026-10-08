// roc 2007-03 005e8240  unit: seg_005e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e8240
//
// 005e8240  c701e4f87b00         mov dword ptr [ecx], 0x7bf8e4
// 005e8246  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
