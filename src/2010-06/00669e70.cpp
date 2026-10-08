// roc 2010-06 00669e70  unit: RBX::VCharacterAppearance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669e70
//
// 00669e70  68c09b6600           push 0x669bc0
// 00669e75  6850cdc100           push 0xc1cd50
// 00669e7a  e81178d9ff           call 0x401690
// 00669e7f  83c408               add esp, 8
// 00669e82  e9b9fbffff           jmp 0x669a40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
