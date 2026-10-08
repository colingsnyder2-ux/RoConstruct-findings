// roc 2007-03 0065c700  unit: seg_00650000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065c700
//
// 0065c700  e87bffffff           call 0x65c680
// 0065c705  8bc8                 mov ecx, eax
// 0065c707  e944ba0200           jmp 0x688150
// library rbxgs/v8world\World.cpp (function ?update@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
