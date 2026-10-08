// roc 2007-03 006c1310  unit: seg_006c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c1310
//
// 006c1310  c70190597d00         mov dword ptr [ecx], 0x7d5990
// 006c1316  e9a5a6f6ff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
