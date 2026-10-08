// roc 2007-08 005f8e50  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8e50
//
// 005f8e50  68ec378c00           push 0x8c37ec
// 005f8e55  6830de5800           push 0x58de30
// 005f8e5a  e8c1c61200           call 0x725520
// 005f8e5f  83c408               add esp, 8
// 005f8e62  e9294ef9ff           jmp 0x58dc90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
