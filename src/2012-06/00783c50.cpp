// roc 2012-06 00783c50  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783c50
//
// 00783c50  68d0086e00           push 0x6e08d0
// 00783c55  6800fde200           push 0xe2fd00
// 00783c5a  e841d9c7ff           call 0x4015a0
// 00783c5f  83c408               add esp, 8
// 00783c62  e909ccf5ff           jmp 0x6e0870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
