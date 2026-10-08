// roc 2007-08 00425110  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425110
//
// 00425110  68d4b48b00           push 0x8bb4d4
// 00425115  68a0064200           push 0x4206a0
// 0042511a  e801043000           call 0x725520
// 0042511f  83c408               add esp, 8
// 00425122  e919aeffff           jmp 0x41ff40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
