// roc 2009-12 0054e760  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0054e760
//
// 0054e760  6850e75400           push 0x54e750
// 0054e765  681c06b800           push 0xb8061c
// 0054e76a  e8c12eebff           call 0x401630
// 0054e76f  83c408               add esp, 8
// 0054e772  e969ffffff           jmp 0x54e6e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
