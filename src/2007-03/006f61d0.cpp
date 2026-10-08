// roc 2007-03 006f61d0  unit: seg_006f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f61d0
//
// 006f61d0  c701a0b47d00         mov dword ptr [ecx], 0x7db4a0
// 006f61d6  e9e5feffff           jmp 0x6f60c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
