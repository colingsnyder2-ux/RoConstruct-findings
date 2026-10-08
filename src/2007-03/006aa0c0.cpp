// roc 2007-03 006aa0c0  unit: seg_006a0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006aa0c0
//
// 006aa0c0  c7016c3e7d00         mov dword ptr [ecx], 0x7d3e6c
// 006aa0c6  e955ffffff           jmp 0x6aa020
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
