// roc 2009-06 0069d2f0  unit: RBX::VForceField::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069d2f0
//
// 0069d2f0  6850a15e00           push 0x5ea150
// 0069d2f5  68a049a400           push 0xa449a0
// 0069d2fa  e81144d6ff           call 0x401710
// 0069d2ff  83c408               add esp, 8
// 0069d302  e9c9c2f4ff           jmp 0x5e95d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
