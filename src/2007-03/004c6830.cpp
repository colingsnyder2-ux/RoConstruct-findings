// roc 2007-03 004c6830  unit: seg_004c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6830
//
// 004c6830  c70170e67900         mov dword ptr [ecx], 0x79e670
// 004c6836  e925fcffff           jmp 0x4c6460
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
