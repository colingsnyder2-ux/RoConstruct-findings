// roc 2008-06 004a22a0  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a22a0
//
// 004a22a0  688c029700           push 0x97028c
// 004a22a5  6800694900           push 0x496900
// 004a22aa  e881500b00           call 0x557330
// 004a22af  83c408               add esp, 8
// 004a22b2  e9893fffff           jmp 0x496240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
