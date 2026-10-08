// roc 2007-03 005a39b0  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a39b0
//
// 005a39b0  684c838b00           push 0x8b834c
// 005a39b5  6850594800           push 0x485950
// 005a39ba  e8912e1800           call 0x726850
// 005a39bf  83c408               add esp, 8
// 005a39c2  e93919eeff           jmp 0x485300
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
