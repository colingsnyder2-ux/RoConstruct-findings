// roc 2007-03 00680ac0  unit: seg_00680000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680ac0
//
// 00680ac0  c70118e27c00         mov dword ptr [ecx], 0x7ce218
// 00680ac6  e9f5aefaff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
