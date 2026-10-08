// roc 2007-08 005a1f50  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1f50
//
// 005a1f50  68acdc8b00           push 0x8bdcac
// 005a1f55  6870794800           push 0x487970
// 005a1f5a  e8c1351800           call 0x725520
// 005a1f5f  83c408               add esp, 8
// 005a1f62  e98950eeff           jmp 0x486ff0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
