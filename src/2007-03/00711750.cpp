// roc 2007-03 00711750  unit: seg_00710000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00711750
//
// 00711750  c7016cea7d00         mov dword ptr [ecx], 0x7dea6c
// 00711756  e98528f6ff           jmp 0x673fe0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
