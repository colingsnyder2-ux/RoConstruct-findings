// roc 2007-03 005c9f60  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c9f60
//
// 005c9f60  68a0ff8b00           push 0x8bffa0
// 005c9f65  6820995c00           push 0x5c9920
// 005c9f6a  e8e1c81500           call 0x726850
// 005c9f6f  83c408               add esp, 8
// 005c9f72  e9d9f8ffff           jmp 0x5c9850
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
