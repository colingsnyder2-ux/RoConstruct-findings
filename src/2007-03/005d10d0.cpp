// roc 2007-03 005d10d0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d10d0
//
// 005d10d0  68a4c28b00           push 0x8bc2a4
// 005d10d5  68805e5500           push 0x555e80
// 005d10da  e871571500           call 0x726850
// 005d10df  83c408               add esp, 8
// 005d10e2  e9a942f8ff           jmp 0x555390
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
