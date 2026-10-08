// roc 2007-08 0059d5a0  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d5a0
//
// 0059d5a0  68a0508c00           push 0x8c50a0
// 0059d5a5  68e0cd5900           push 0x59cde0
// 0059d5aa  e8717f1800           call 0x725520
// 0059d5af  83c408               add esp, 8
// 0059d5b2  e9a9f7ffff           jmp 0x59cd60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
