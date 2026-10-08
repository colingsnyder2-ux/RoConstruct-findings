// roc 2007-03 005a60d0  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a60d0
//
// 005a60d0  6850838b00           push 0x8b8350
// 005a60d5  6860594800           push 0x485960
// 005a60da  e871071800           call 0x726850
// 005a60df  83c408               add esp, 8
// 005a60e2  e999f2edff           jmp 0x485380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
