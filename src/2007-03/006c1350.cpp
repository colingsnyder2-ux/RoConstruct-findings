// roc 2007-03 006c1350  unit: seg_006c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c1350
//
// 006c1350  c701a8597d00         mov dword ptr [ecx], 0x7d59a8
// 006c1356  e965a6f6ff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
