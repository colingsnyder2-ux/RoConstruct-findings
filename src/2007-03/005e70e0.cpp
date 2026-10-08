// roc 2007-03 005e70e0  unit: seg_005e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e70e0
//
// 005e70e0  8b09                 mov ecx, dword ptr [ecx]
// 005e70e2  e9b9960200           jmp 0x6107a0
// library rbxgs/script\Script.cpp (function ?empty@signal_base@detail@signals@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
