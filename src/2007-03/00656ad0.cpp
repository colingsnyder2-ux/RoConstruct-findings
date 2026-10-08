// roc 2007-03 00656ad0  unit: seg_00650000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00656ad0
//
// 00656ad0  e8cbe4ffff           call 0x654fa0
// 00656ad5  8bc8                 mov ecx, eax
// 00656ad7  e9b4f6ffff           jmp 0x656190
// library rbxgs/v8world\World.cpp (function ?update@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/World.cpp
