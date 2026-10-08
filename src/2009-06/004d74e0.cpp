// roc 2009-06 004d74e0  unit: RBX::VMessage::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d74e0
//
// 004d74e0  6820654d00           push 0x4d6520
// 004d74e5  68c8eda300           push 0xa3edc8
// 004d74ea  e821a2f2ff           call 0x401710
// 004d74ef  83c408               add esp, 8
// 004d74f2  e939ecffff           jmp 0x4d6130
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
