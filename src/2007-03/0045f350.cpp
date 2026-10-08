// roc 2007-03 0045f350  unit: seg_00450000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045f350
//
// 0045f350  c701a43d7900         mov dword ptr [ecx], 0x793da4
// 0045f356  e9a9f71b00           jmp 0x61eb04
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
