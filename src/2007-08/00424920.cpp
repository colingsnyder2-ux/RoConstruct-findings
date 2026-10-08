// roc 2007-08 00424920  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424920
//
// 00424920  68c8b48b00           push 0x8bb4c8
// 00424925  6870064200           push 0x420670
// 0042492a  e8f10b3000           call 0x725520
// 0042492f  83c408               add esp, 8
// 00424932  e989b4ffff           jmp 0x41fdc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
