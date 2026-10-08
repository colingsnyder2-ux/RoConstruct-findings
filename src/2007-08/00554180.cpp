// roc 2007-08 00554180  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554180
//
// 00554180  6880af8b00           push 0x8baf80
// 00554185  6870d24000           push 0x40d270
// 0055418a  e891131d00           call 0x725520
// 0055418f  83c408               add esp, 8
// 00554192  e9698bebff           jmp 0x40cd00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
