// roc 2007-03 00704610  unit: seg_00700000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704610
//
// 00704610  c701fcd57d00         mov dword ptr [ecx], 0x7dd5fc
// 00704616  e9d5b8fdff           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
