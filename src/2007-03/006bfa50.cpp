// roc 2007-03 006bfa50  unit: seg_006b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bfa50
//
// 006bfa50  c7014c557d00         mov dword ptr [ecx], 0x7d554c
// 006bfa56  e919f0f5ff           jmp 0x61ea74
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
