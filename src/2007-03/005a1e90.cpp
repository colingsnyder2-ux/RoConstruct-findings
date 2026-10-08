// roc 2007-03 005a1e90  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1e90
//
// 005a1e90  6844838b00           push 0x8b8344
// 005a1e95  6830594800           push 0x485930
// 005a1e9a  e8b1491800           call 0x726850
// 005a1e9f  83c408               add esp, 8
// 005a1ea2  e95933eeff           jmp 0x485200
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
