// roc 2007-03 00557bc0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00557bc0
//
// 00557bc0  6878c28b00           push 0x8bc278
// 00557bc5  68d05d5500           push 0x555dd0
// 00557bca  e881ec1c00           call 0x726850
// 00557bcf  83c408               add esp, 8
// 00557bd2  e9e9d2ffff           jmp 0x554ec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
