// roc 2007-03 00666450  unit: seg_00660000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666450
//
// 00666450  c701fcaa7c00         mov dword ptr [ecx], 0x7caafc
// 00666456  e97f460d00           jmp 0x73aada
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
