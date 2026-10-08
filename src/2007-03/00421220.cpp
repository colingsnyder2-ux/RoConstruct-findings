// roc 2007-03 00421220  unit: seg_00420000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00421220
//
// 00421220  c701d0547800         mov dword ptr [ecx], 0x7854d0
// 00421226  e98fd41f00           jmp 0x61e6ba
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
