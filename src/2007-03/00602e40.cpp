// roc 2007-03 00602e40  unit: seg_00600000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00602e40
//
// 00602e40  68c8ff8b00           push 0x8bffc8
// 00602e45  68c0bf5c00           push 0x5cbfc0
// 00602e4a  e8013a1200           call 0x726850
// 00602e4f  83c408               add esp, 8
// 00602e52  e9a990fcff           jmp 0x5cbf00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
