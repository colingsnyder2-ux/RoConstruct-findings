// roc 2012-06 0058a300  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0058a300
//
// 0058a300  68f0a25800           push 0x58a2f0
// 0058a305  68d84be200           push 0xe24bd8
// 0058a30a  e89172e7ff           call 0x4015a0
// 0058a30f  83c408               add esp, 8
// 0058a312  e959ffffff           jmp 0x58a270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
