// roc 2007-08 00424c30  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424c30
//
// 00424c30  68ccb48b00           push 0x8bb4cc
// 00424c35  6880064200           push 0x420680
// 00424c3a  e8e1083000           call 0x725520
// 00424c3f  83c408               add esp, 8
// 00424c42  e9f9b1ffff           jmp 0x41fe40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
