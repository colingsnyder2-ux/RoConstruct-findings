// roc 2012-06 006c7920  unit: RBX::VSettings::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c7920
//
// 006c7920  6810796c00           push 0x6c7910
// 006c7925  68f0e6e200           push 0xe2e6f0
// 006c792a  e8719cd3ff           call 0x4015a0
// 006c792f  83c408               add esp, 8
// 006c7932  e969ffffff           jmp 0x6c78a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
