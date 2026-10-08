// roc 2008-06 0040ba50  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ba50
//
// 0040ba50  6884c39600           push 0x96c384
// 0040ba55  68f09f4000           push 0x409ff0
// 0040ba5a  e8d1b81400           call 0x557330
// 0040ba5f  83c408               add esp, 8
// 0040ba62  e939e0ffff           jmp 0x409aa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
