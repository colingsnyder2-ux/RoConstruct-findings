// roc 2007-08 0049d650  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049d650
//
// 0049d650  68a4df8b00           push 0x8bdfa4
// 0049d655  6880204900           push 0x492080
// 0049d65a  e8c17e2800           call 0x725520
// 0049d65f  83c408               add esp, 8
// 0049d662  e9a941ffff           jmp 0x491810
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
