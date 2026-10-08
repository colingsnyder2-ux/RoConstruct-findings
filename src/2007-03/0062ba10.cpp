// roc 2007-03 0062ba10  unit: seg_00620000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062ba10
//
// 0062ba10  c701f0357c00         mov dword ptr [ecx], 0x7c35f0
// 0062ba16  e9a5ffffff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
