// roc 2007-03 00558c50  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558c50
//
// 00558c50  6848c28b00           push 0x8bc248
// 00558c55  68105d5500           push 0x555d10
// 00558c5a  e8f1db1c00           call 0x726850
// 00558c5f  83c408               add esp, 8
// 00558c62  e919bdffff           jmp 0x554980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
