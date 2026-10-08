// roc 2007-08 00499ed0  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00499ed0
//
// 00499ed0  68a0df8b00           push 0x8bdfa0
// 00499ed5  6870204900           push 0x492070
// 00499eda  e841b62800           call 0x725520
// 00499edf  83c408               add esp, 8
// 00499ee2  e9a978ffff           jmp 0x491790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
