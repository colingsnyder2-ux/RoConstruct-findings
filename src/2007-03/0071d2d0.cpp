// roc 2007-03 0071d2d0  unit: seg_00710000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071d2d0
//
// 0071d2d0  c7017c327e00         mov dword ptr [ecx], 0x7e327c
// 0071d2d6  e9c52f0000           jmp 0x7202a0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
