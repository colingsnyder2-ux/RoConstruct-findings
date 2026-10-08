// roc 2007-03 00721980  unit: seg_00720000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00721980
//
// 00721980  c701b43e7e00         mov dword ptr [ecx], 0x7e3eb4
// 00721986  e9e7980100           jmp 0x73b272
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
