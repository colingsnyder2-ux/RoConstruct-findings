// roc 2012-06 00783c10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783c10
//
// 00783c10  68f0076e00           push 0x6e07f0
// 00783c15  68f8fce200           push 0xe2fcf8
// 00783c1a  e881d9c7ff           call 0x4015a0
// 00783c1f  83c408               add esp, 8
// 00783c22  e969cbf5ff           jmp 0x6e0790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
