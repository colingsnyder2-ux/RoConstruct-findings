// roc 2012-06 008f66d0  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f66d0
//
// 008f66d0  68c0668f00           push 0x8f66c0
// 008f66d5  689863e500           push 0xe56398
// 008f66da  e8c1aeb0ff           call 0x4015a0
// 008f66df  83c408               add esp, 8
// 008f66e2  e969ffffff           jmp 0x8f6650
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
