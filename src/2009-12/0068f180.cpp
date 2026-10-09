// roc 2009-12 0068f180  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068f180
//
// 0068f180  68a0e56800           push 0x68e5a0
// 0068f185  68d010b900           push 0xb910d0
// 0068f18a  e8a124d7ff           call 0x401630
// 0068f18f  83c408               add esp, 8
// 0068f192  e949f3ffff           jmp 0x68e4e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
