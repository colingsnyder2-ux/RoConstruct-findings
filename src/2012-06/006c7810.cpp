// roc 2012-06 006c7810  unit: RBX::VSettings::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c7810
//
// 006c7810  6800786c00           push 0x6c7800
// 006c7815  68e4e6e200           push 0xe2e6e4
// 006c781a  e8819dd3ff           call 0x4015a0
// 006c781f  83c408               add esp, 8
// 006c7822  e969ffffff           jmp 0x6c7790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
