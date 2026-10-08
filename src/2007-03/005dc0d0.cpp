// roc 2007-03 005dc0d0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc0d0
//
// 005dc0d0  6858d88b00           push 0x8bd858
// 005dc0d5  6880835800           push 0x588380
// 005dc0da  e871a71400           call 0x726850
// 005dc0df  83c408               add esp, 8
// 005dc0e2  e939c0faff           jmp 0x588120
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
