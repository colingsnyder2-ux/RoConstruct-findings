// roc 2007-03 005dfe10  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfe10
//
// 005dfe10  68b4078c00           push 0x8c07b4
// 005dfe15  6890f05d00           push 0x5df090
// 005dfe1a  e8316a1400           call 0x726850
// 005dfe1f  83c408               add esp, 8
// 005dfe22  e949edffff           jmp 0x5deb70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
