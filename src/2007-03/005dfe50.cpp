// roc 2007-03 005dfe50  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfe50
//
// 005dfe50  68bc078c00           push 0x8c07bc
// 005dfe55  68b0f05d00           push 0x5df0b0
// 005dfe5a  e8f1691400           call 0x726850
// 005dfe5f  83c408               add esp, 8
// 005dfe62  e9e9edffff           jmp 0x5dec50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
