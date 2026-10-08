// roc 2007-03 006d6310  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d6310
//
// 006d6310  c7010c7c7d00         mov dword ptr [ecx], 0x7d7c0c
// 006d6316  e9d59b0000           jmp 0x6dfef0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
