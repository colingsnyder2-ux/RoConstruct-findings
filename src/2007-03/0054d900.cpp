// roc 2007-03 0054d900  unit: seg_00540000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054d900
//
// 0054d900  8b09                 mov ecx, dword ptr [ecx]
// 0054d902  e949f5ffff           jmp 0x54ce50
// library rbxgs/script\Script.cpp (function ?empty@signal_base@detail@signals@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
