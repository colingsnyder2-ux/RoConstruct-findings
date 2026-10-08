// roc 2011-06 0065d410  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065d410
//
// 0065d410  6800d46500           push 0x65d400
// 0065d415  68b4d8cc00           push 0xccd8b4
// 0065d41a  e8f141daff           call 0x401610
// 0065d41f  83c408               add esp, 8
// 0065d422  e969ffffff           jmp 0x65d390
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
