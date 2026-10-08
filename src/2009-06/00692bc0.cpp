// roc 2009-06 00692bc0  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00692bc0
//
// 00692bc0  6870a15e00           push 0x5ea170
// 00692bc5  68a849a400           push 0xa449a8
// 00692bca  e841ebd6ff           call 0x401710
// 00692bcf  83c408               add esp, 8
// 00692bd2  e9d96af5ff           jmp 0x5e96b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
