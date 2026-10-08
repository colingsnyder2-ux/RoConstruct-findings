// roc 2007-03 005cccb0  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cccb0
//
// 005cccb0  6890c28b00           push 0x8bc290
// 005cccb5  68305e5500           push 0x555e30
// 005cccba  e8919b1500           call 0x726850
// 005cccbf  83c408               add esp, 8
// 005cccc2  e99984f8ff           jmp 0x555160
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
