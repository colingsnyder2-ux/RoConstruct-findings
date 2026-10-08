// roc 2007-03 0063fe90  unit: seg_00630000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063fe90
//
// 0063fe90  c701244e7c00         mov dword ptr [ecx], 0x7c4e24
// 0063fe96  e90beafdff           jmp 0x61e8a6
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
