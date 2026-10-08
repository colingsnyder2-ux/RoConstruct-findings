// roc 2007-08 005b0720  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0720
//
// 005b0720  6868e98b00           push 0x8be968
// 005b0725  6870714a00           push 0x4a7170
// 005b072a  e8f14d1700           call 0x725520
// 005b072f  83c408               add esp, 8
// 005b0732  e9b951efff           jmp 0x4a58f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
