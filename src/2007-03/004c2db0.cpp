// roc 2007-03 004c2db0  unit: seg_004c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2db0
//
// 004c2db0  c701f8e57900         mov dword ptr [ecx], 0x79e5f8
// 004c2db6  e9a5360000           jmp 0x4c6460
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
