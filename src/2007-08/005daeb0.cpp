// roc 2007-08 005daeb0  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005daeb0
//
// 005daeb0  6820238c00           push 0x8c2320
// 005daeb5  6850ed5500           push 0x55ed50
// 005daeba  e861a61400           call 0x725520
// 005daebf  83c408               add esp, 8
// 005daec2  e9d937f8ff           jmp 0x55e6a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
