// roc 2007-08 00425330  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425330
//
// 00425330  68d8b48b00           push 0x8bb4d8
// 00425335  68b0064200           push 0x4206b0
// 0042533a  e8e1013000           call 0x725520
// 0042533f  83c408               add esp, 8
// 00425342  e979acffff           jmp 0x41ffc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
