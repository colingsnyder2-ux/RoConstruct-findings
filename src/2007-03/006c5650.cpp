// roc 2007-03 006c5650  unit: seg_006c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c5650
//
// 006c5650  c7013c617d00         mov dword ptr [ecx], 0x7d613c
// 006c5656  e96563f6ff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
