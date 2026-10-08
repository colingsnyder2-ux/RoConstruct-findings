// roc 2007-03 00558fe0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558fe0
//
// 00558fe0  6828c28b00           push 0x8bc228
// 00558fe5  68905c5500           push 0x555c90
// 00558fea  e861d81c00           call 0x726850
// 00558fef  83c408               add esp, 8
// 00558ff2  e909b6ffff           jmp 0x554600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
