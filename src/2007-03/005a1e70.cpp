// roc 2007-03 005a1e70  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1e70
//
// 005a1e70  6840838b00           push 0x8b8340
// 005a1e75  6820594800           push 0x485920
// 005a1e7a  e8d1491800           call 0x726850
// 005a1e7f  83c408               add esp, 8
// 005a1e82  e9f932eeff           jmp 0x485180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
