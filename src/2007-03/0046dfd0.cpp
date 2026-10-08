// roc 2007-03 0046dfd0  unit: seg_00460000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046dfd0
//
// 0046dfd0  c701e4597900         mov dword ptr [ecx], 0x7959e4
// 0046dfd6  e955d10000           jmp 0x47b130
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
