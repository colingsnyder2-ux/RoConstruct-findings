// roc 2012-06 0086d710  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086d710
//
// 0086d710  68801f6d00           push 0x6d1f80
// 0086d715  6844f9e200           push 0xe2f944
// 0086d71a  e8813eb9ff           call 0x4015a0
// 0086d71f  83c408               add esp, 8
// 0086d722  e9e92ce6ff           jmp 0x6d0410
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
