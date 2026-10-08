// roc 2007-03 004324a0  unit: seg_00430000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004324a0
//
// 004324a0  c701b4a17800         mov dword ptr [ecx], 0x78a1b4
// 004324a6  e9a5f2ffff           jmp 0x431750
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
