// roc 2009-06 004d0c10  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d0c10
//
// 004d0c10  6830484b00           push 0x4b4830
// 004d0c15  68e0d4a300           push 0xa3d4e0
// 004d0c1a  e8f10af3ff           call 0x401710
// 004d0c1f  83c408               add esp, 8
// 004d0c22  e9b92dfeff           jmp 0x4b39e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
