// roc 2007-03 005dc0b0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc0b0
//
// 005dc0b0  6854d88b00           push 0x8bd854
// 005dc0b5  6870835800           push 0x588370
// 005dc0ba  e891a71400           call 0x726850
// 005dc0bf  83c408               add esp, 8
// 005dc0c2  e9e9bffaff           jmp 0x5880b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
