// roc 2008-06 0049f590  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f590
//
// 0049f590  6888029700           push 0x970288
// 0049f595  68f0684900           push 0x4968f0
// 0049f59a  e8917d0b00           call 0x557330
// 0049f59f  83c408               add esp, 8
// 0049f5a2  e9296cffff           jmp 0x4961d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
