// roc 2007-03 006d6350  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d6350
//
// 006d6350  c701247c7d00         mov dword ptr [ecx], 0x7d7c24
// 006d6356  e96556f5ff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
