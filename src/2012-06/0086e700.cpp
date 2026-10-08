// roc 2012-06 0086e700  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086e700
//
// 0086e700  68901f6d00           push 0x6d1f90
// 0086e705  6848f9e200           push 0xe2f948
// 0086e70a  e8912eb9ff           call 0x4015a0
// 0086e70f  83c408               add esp, 8
// 0086e712  e9691de6ff           jmp 0x6d0480
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
