// roc 2007-03 00558ec0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558ec0
//
// 00558ec0  6850c28b00           push 0x8bc250
// 00558ec5  68305d5500           push 0x555d30
// 00558eca  e881d91c00           call 0x726850
// 00558ecf  83c408               add esp, 8
// 00558ed2  e989bbffff           jmp 0x554a60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
