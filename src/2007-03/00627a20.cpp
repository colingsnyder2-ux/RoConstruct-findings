// roc 2007-03 00627a20  unit: seg_00620000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00627a20
//
// 00627a20  c70120347c00         mov dword ptr [ecx], 0x7c3420
// 00627a26  e9953f0000           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
