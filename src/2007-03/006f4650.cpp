// roc 2007-03 006f4650  unit: seg_006f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f4650
//
// 006f4650  c701d4b17d00         mov dword ptr [ecx], 0x7db1d4
// 006f4656  e995b8feff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
