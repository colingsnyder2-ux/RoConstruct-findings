// roc 2012-06 00783b50  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783b50
//
// 00783b50  6810b66700           push 0x67b610
// 00783b55  68848de200           push 0xe28d84
// 00783b5a  e841dac7ff           call 0x4015a0
// 00783b5f  83c408               add esp, 8
// 00783b62  e9497aefff           jmp 0x67b5b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
