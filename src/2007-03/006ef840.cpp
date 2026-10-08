// roc 2007-03 006ef840  unit: seg_006e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ef840
//
// 006ef840  c701cca67d00         mov dword ptr [ecx], 0x7da6cc
// 006ef846  e9a5feffff           jmp 0x6ef6f0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
