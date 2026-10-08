// roc 2007-03 00649050  unit: seg_00640000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00649050
//
// 00649050  8b09                 mov ecx, dword ptr [ecx]
// 00649052  e9a9f0ffff           jmp 0x648100
// library rbxgs/script\Script.cpp (function ?empty@signal_base@detail@signals@boost@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
