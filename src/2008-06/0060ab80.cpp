// roc 2008-06 0060ab80  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ab80
//
// 0060ab80  68b8539700           push 0x9753b8
// 0060ab85  6870dd5700           push 0x57dd70
// 0060ab8a  e8a1c7f4ff           call 0x557330
// 0060ab8f  83c408               add esp, 8
// 0060ab92  e9d92af7ff           jmp 0x57d670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
