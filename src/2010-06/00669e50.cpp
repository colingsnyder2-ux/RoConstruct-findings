// roc 2010-06 00669e50  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669e50
//
// 00669e50  68a0494a00           push 0x4a49a0
// 00669e55  684c3ec000           push 0xc03e4c
// 00669e5a  e83178d9ff           call 0x401690
// 00669e5f  83c408               add esp, 8
// 00669e62  e9d99be3ff           jmp 0x4a3a40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
