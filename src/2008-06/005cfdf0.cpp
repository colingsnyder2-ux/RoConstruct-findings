// roc 2008-06 005cfdf0  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cfdf0
//
// 005cfdf0  68f89a9700           push 0x979af8
// 005cfdf5  68c0f55c00           push 0x5cf5c0
// 005cfdfa  e83175f8ff           call 0x557330
// 005cfdff  83c408               add esp, 8
// 005cfe02  e939f7ffff           jmp 0x5cf540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
