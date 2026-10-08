// roc 2007-03 00722000  unit: seg_00720000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00722000
//
// 00722000  c701bc3f7e00         mov dword ptr [ecx], 0x7e3fbc
// 00722006  e905fdffff           jmp 0x721d10
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
