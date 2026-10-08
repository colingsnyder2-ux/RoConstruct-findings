// roc 2007-03 00696710  unit: seg_00690000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696710
//
// 00696710  c701e40e7d00         mov dword ptr [ecx], 0x7d0ee4
// 00696716  c3                   ret 
// library rbxgs/humanoid\Balancing.cpp (function ??1State@Humanoid@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Balancing.cpp
