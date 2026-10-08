// roc 2007-03 00698730  unit: seg_00690000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698730
//
// 00698730  c701301a7d00         mov dword ptr [ecx], 0x7d1a30
// 00698736  e98532f9ff           jmp 0x62b9c0
// library rbxgs/gui\GUI.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
