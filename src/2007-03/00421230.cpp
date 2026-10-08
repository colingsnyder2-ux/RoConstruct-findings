// roc 2007-03 00421230  unit: seg_00420000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00421230
//
// 00421230  c70198747800         mov dword ptr [ecx], 0x787498
// 00421236  e9c5d61f00           jmp 0x61e900
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
