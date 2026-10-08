// roc 2012-06 0086fea0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086fea0
//
// 0086fea0  68a01f6d00           push 0x6d1fa0
// 0086fea5  684cf9e200           push 0xe2f94c
// 0086feaa  e8f116b9ff           call 0x4015a0
// 0086feaf  83c408               add esp, 8
// 0086feb2  e93906e6ff           jmp 0x6d04f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
