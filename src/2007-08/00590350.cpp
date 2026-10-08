// roc 2007-08 00590350  unit: RBX::VHint::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590350
//
// 00590350  68e4378c00           push 0x8c37e4
// 00590355  6810de5800           push 0x58de10
// 0059035a  e8c1511900           call 0x725520
// 0059035f  83c408               add esp, 8
// 00590362  e949d8ffff           jmp 0x58dbb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
