// roc 2007-03 00680a80  unit: seg_00680000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680a80
//
// 00680a80  c70100e27c00         mov dword ptr [ecx], 0x7ce200
// 00680a86  e935affaff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
