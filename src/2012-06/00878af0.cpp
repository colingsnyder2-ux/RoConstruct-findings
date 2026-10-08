// roc 2012-06 00878af0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00878af0
//
// 00878af0  68d01f6d00           push 0x6d1fd0
// 00878af5  6858f9e200           push 0xe2f958
// 00878afa  e8a18ab8ff           call 0x4015a0
// 00878aff  83c408               add esp, 8
// 00878b02  e9397be5ff           jmp 0x6d0640
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
