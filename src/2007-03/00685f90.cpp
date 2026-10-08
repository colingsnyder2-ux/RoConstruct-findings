// roc 2007-03 00685f90  unit: seg_00680000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685f90
//
// 00685f90  8b09                 mov ecx, dword ptr [ecx]
// 00685f92  e9d9ffffff           jmp 0x685f70
// library rbxgs/script\Script.cpp (function ?empty@signal_base@detail@signals@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
