// roc 2007-03 004c2da0  unit: seg_004c0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2da0
//
// 004c2da0  c701f0e57900         mov dword ptr [ecx], 0x79e5f0
// 004c2da6  e985fdffff           jmp 0x4c2b30
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
