// roc 2007-03 005e70c0  unit: seg_005e0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e70c0
//
// 005e70c0  8b09                 mov ecx, dword ptr [ecx]
// 005e70c2  e9698d0200           jmp 0x60fe30
// library rbxgs/script\Script.cpp (function ?empty@signal_base@detail@signals@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
