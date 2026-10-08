// roc 2007-03 006cd3c0  unit: seg_006c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cd3c0
//
// 006cd3c0  c701686f7d00         mov dword ptr [ecx], 0x7d6f68
// 006cd3c6  e9252b0100           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
