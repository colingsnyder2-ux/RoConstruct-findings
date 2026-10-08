// roc 2007-08 00590330  unit: RBX::VMessage::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00590330
//
// 00590330  68e0378c00           push 0x8c37e0
// 00590335  6800de5800           push 0x58de00
// 0059033a  e8e1511900           call 0x725520
// 0059033f  83c408               add esp, 8
// 00590342  e9f9d7ffff           jmp 0x58db40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
