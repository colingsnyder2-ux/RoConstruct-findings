// roc 2007-03 00433b30  unit: seg_00430000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00433b30
//
// 00433b30  c701b4ab7800         mov dword ptr [ecx], 0x78abb4
// 00433b36  e939af1e00           jmp 0x61ea74
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
