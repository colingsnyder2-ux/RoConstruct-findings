// roc 2007-08 005a1f70  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1f70
//
// 005a1f70  68b0dc8b00           push 0x8bdcb0
// 005a1f75  6880794800           push 0x487980
// 005a1f7a  e8a1351800           call 0x725520
// 005a1f7f  83c408               add esp, 8
// 005a1f82  e9e950eeff           jmp 0x487070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
