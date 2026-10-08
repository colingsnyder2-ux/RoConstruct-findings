// roc 2008-06 004a3c90  unit: RBX::VMessage::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3c90
//
// 004a3c90  68100d9700           push 0x970d10
// 004a3c95  68501b4a00           push 0x4a1b50
// 004a3c9a  e891360b00           call 0x557330
// 004a3c9f  83c408               add esp, 8
// 004a3ca2  e9d9d9ffff           jmp 0x4a1680
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
