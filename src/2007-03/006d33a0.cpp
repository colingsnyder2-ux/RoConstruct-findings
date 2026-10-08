// roc 2007-03 006d33a0  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d33a0
//
// 006d33a0  c7010c757d00         mov dword ptr [ecx], 0x7d750c
// 006d33a6  e995fbffff           jmp 0x6d2f40
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
