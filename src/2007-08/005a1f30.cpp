// roc 2007-08 005a1f30  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1f30
//
// 005a1f30  68a8dc8b00           push 0x8bdca8
// 005a1f35  6860794800           push 0x487960
// 005a1f3a  e8e1351800           call 0x725520
// 005a1f3f  83c408               add esp, 8
// 005a1f42  e92950eeff           jmp 0x486f70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
