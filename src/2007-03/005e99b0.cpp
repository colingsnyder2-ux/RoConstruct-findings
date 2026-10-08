// roc 2007-03 005e99b0  unit: seg_005e0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e99b0
//
// 005e99b0  68040f8c00           push 0x8c0f04
// 005e99b5  68a0995e00           push 0x5e99a0
// 005e99ba  e891ce1300           call 0x726850
// 005e99bf  83c408               add esp, 8
// 005e99c2  e969ffffff           jmp 0x5e9930
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
