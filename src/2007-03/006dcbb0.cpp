// roc 2007-03 006dcbb0  unit: seg_006d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dcbb0
//
// 006dcbb0  c7011c817d00         mov dword ptr [ecx], 0x7d811c
// 006dcbb6  e93be40500           jmp 0x73aff6
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
