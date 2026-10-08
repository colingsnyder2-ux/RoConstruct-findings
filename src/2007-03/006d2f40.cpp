// roc 2007-03 006d2f40  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d2f40
//
// 006d2f40  c7017c747d00         mov dword ptr [ecx], 0x7d747c
// 006d2f46  e955bbffff           jmp 0x6ceaa0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
