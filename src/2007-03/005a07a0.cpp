// roc 2007-03 005a07a0  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a07a0
//
// 005a07a0  6838838b00           push 0x8b8338
// 005a07a5  6800594800           push 0x485900
// 005a07aa  e8a1601800           call 0x726850
// 005a07af  83c408               add esp, 8
// 005a07b2  e9c948eeff           jmp 0x485080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
