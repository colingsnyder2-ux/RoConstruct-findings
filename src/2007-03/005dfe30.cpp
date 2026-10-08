// roc 2007-03 005dfe30  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfe30
//
// 005dfe30  68b8078c00           push 0x8c07b8
// 005dfe35  68a0f05d00           push 0x5df0a0
// 005dfe3a  e8116a1400           call 0x726850
// 005dfe3f  83c408               add esp, 8
// 005dfe42  e999edffff           jmp 0x5debe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
