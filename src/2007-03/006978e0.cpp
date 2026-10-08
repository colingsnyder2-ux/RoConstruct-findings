// roc 2007-03 006978e0  unit: seg_00690000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006978e0
//
// 006978e0  c701ec0e7d00         mov dword ptr [ecx], 0x7d0eec
// 006978e6  e965fdffff           jmp 0x697650
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
