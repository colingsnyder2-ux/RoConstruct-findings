// roc 2007-03 005579f0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005579f0
//
// 005579f0  6884c28b00           push 0x8bc284
// 005579f5  68005e5500           push 0x555e00
// 005579fa  e851ee1c00           call 0x726850
// 005579ff  83c408               add esp, 8
// 00557a02  e909d6ffff           jmp 0x555010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
