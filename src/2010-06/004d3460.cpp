// roc 2010-06 004d3460  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d3460
//
// 004d3460  6810494a00           push 0x4a4910
// 004d3465  68283ec000           push 0xc03e28
// 004d346a  e821e2f2ff           call 0x401690
// 004d346f  83c408               add esp, 8
// 004d3472  e9d901fdff           jmp 0x4a3650
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
