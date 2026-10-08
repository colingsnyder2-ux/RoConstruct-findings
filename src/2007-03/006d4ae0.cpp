// roc 2007-03 006d4ae0  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d4ae0
//
// 006d4ae0  c7018c797d00         mov dword ptr [ecx], 0x7d798c
// 006d4ae6  e9899ff4ff           jmp 0x61ea74
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
