// roc 2007-03 005a1eb0  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1eb0
//
// 005a1eb0  6848838b00           push 0x8b8348
// 005a1eb5  6840594800           push 0x485940
// 005a1eba  e891491800           call 0x726850
// 005a1ebf  83c408               add esp, 8
// 005a1ec2  e9b933eeff           jmp 0x485280
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
