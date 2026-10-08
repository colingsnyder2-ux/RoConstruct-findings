// roc 2011-06 0065d4b0  unit: N::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065d4b0
//
// 0065d4b0  68a0d46500           push 0x65d4a0
// 0065d4b5  68c0d8cc00           push 0xccd8c0
// 0065d4ba  e85141daff           call 0x401610
// 0065d4bf  83c408               add esp, 8
// 0065d4c2  e969ffffff           jmp 0x65d430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
