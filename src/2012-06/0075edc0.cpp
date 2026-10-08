// roc 2012-06 0075edc0  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0075edc0
//
// 0075edc0  68b0ed7500           push 0x75edb0
// 0075edc5  68e86ae300           push 0xe36ae8
// 0075edca  e8d127caff           call 0x4015a0
// 0075edcf  83c408               add esp, 8
// 0075edd2  e969ffffff           jmp 0x75ed40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
