// roc 2007-08 00424f00  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424f00
//
// 00424f00  68d0b48b00           push 0x8bb4d0
// 00424f05  6890064200           push 0x420690
// 00424f0a  e811063000           call 0x725520
// 00424f0f  83c408               add esp, 8
// 00424f12  e9a9afffff           jmp 0x41fec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
