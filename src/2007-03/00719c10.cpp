// roc 2007-03 00719c10  unit: seg_00710000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00719c10
//
// 00719c10  c7018c1d7e00         mov dword ptr [ecx], 0x7e1d8c
// 00719c16  e985660000           jmp 0x7202a0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
