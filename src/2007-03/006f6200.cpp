// roc 2007-03 006f6200  unit: seg_006f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f6200
//
// 006f6200  c70198b47d00         mov dword ptr [ecx], 0x7db498
// 006f6206  e9d5ffffff           jmp 0x6f61e0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
