// roc 2009-12 0067f310  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067f310
//
// 0067f310  68d03a4100           push 0x413ad0
// 0067f315  6810a1b700           push 0xb7a110
// 0067f31a  e81123d8ff           call 0x401630
// 0067f31f  83c408               add esp, 8
// 0067f322  e99943d9ff           jmp 0x4136c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
