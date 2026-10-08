// roc 2007-03 0065c550  unit: seg_00650000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065c550
//
// 0065c550  c70134857c00         mov dword ptr [ecx], 0x7c8534
// 0065c556  e95de90d00           jmp 0x73aeb8
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
