// roc 2007-03 00715ce0  unit: seg_00710000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715ce0
//
// 00715ce0  c701ec107e00         mov dword ptr [ecx], 0x7e10ec
// 00715ce6  e9b5a50000           jmp 0x7202a0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
