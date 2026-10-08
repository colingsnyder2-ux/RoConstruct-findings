// roc 2012-06 00783af0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783af0
//
// 00783af0  68c0a06800           push 0x68a0c0
// 00783af5  6818ace200           push 0xe2ac18
// 00783afa  e8a1dac7ff           call 0x4015a0
// 00783aff  83c408               add esp, 8
// 00783b02  e95965f0ff           jmp 0x68a060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
