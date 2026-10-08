// roc 2007-03 00426700  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426700
//
// 00426700  68045a8b00           push 0x8b5a04
// 00426705  6860234200           push 0x422360
// 0042670a  e841013000           call 0x726850
// 0042670f  83c408               add esp, 8
// 00426712  e9f9b3ffff           jmp 0x421b10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
