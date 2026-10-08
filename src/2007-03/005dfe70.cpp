// roc 2007-03 005dfe70  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfe70
//
// 005dfe70  68c0078c00           push 0x8c07c0
// 005dfe75  68c0f05d00           push 0x5df0c0
// 005dfe7a  e8d1691400           call 0x726850
// 005dfe7f  83c408               add esp, 8
// 005dfe82  e939eeffff           jmp 0x5decc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
