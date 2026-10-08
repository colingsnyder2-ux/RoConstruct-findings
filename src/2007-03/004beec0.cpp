// roc 2007-03 004beec0  unit: seg_004b0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004beec0
//
// 004beec0  c7013ce57900         mov dword ptr [ecx], 0x79e53c
// 004beec6  e995feffff           jmp 0x4bed60
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
