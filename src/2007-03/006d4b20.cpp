// roc 2007-03 006d4b20  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d4b20
//
// 006d4b20  c701cc7a7d00         mov dword ptr [ecx], 0x7d7acc
// 006d4b26  e9499ff4ff           jmp 0x61ea74
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
