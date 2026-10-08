// roc 2007-03 00426b10  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426b10
//
// 00426b10  680c5a8b00           push 0x8b5a0c
// 00426b15  6880234200           push 0x422380
// 00426b1a  e831fd2f00           call 0x726850
// 00426b1f  83c408               add esp, 8
// 00426b22  e9e9b0ffff           jmp 0x421c10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
