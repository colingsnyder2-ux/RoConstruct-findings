// roc 2007-03 005a9590  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9590
//
// 005a9590  68208f8b00           push 0x8b8f20
// 005a9595  68c0d04900           push 0x49d0c0
// 005a959a  e8b1d21700           call 0x726850
// 005a959f  83c408               add esp, 8
// 005a95a2  e9792cefff           jmp 0x49c220
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
