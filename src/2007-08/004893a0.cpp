// roc 2007-08 004893a0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004893a0
//
// 004893a0  6884af8b00           push 0x8baf84
// 004893a5  6880d24000           push 0x40d280
// 004893aa  e871c12900           call 0x725520
// 004893af  83c408               add esp, 8
// 004893b2  e9c939f8ff           jmp 0x40cd80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
