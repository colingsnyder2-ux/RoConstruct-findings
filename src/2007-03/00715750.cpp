// roc 2007-03 00715750  unit: seg_00710000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715750
//
// 00715750  c7013c0e7e00         mov dword ptr [ecx], 0x7e0e3c
// 00715756  e945ab0000           jmp 0x7202a0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
