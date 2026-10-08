// roc 2007-08 005a0350  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0350
//
// 005a0350  68a4dc8b00           push 0x8bdca4
// 005a0355  6850794800           push 0x487950
// 005a035a  e8c1511800           call 0x725520
// 005a035f  83c408               add esp, 8
// 005a0362  e9896beeff           jmp 0x486ef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
