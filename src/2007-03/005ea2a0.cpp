// roc 2007-03 005ea2a0  unit: seg_005e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea2a0
//
// 005ea2a0  c701a4fc7b00         mov dword ptr [ecx], 0x7bfca4
// 005ea2a6  e925150000           jmp 0x5eb7d0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
