// roc 2008-06 0040c3a0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c3a0
//
// 0040c3a0  6890c39600           push 0x96c390
// 0040c3a5  6820a04000           push 0x40a020
// 0040c3aa  e881af1400           call 0x557330
// 0040c3af  83c408               add esp, 8
// 0040c3b2  e939d8ffff           jmp 0x409bf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
