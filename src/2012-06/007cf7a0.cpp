// roc 2012-06 007cf7a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cf7a0
//
// 007cf7a0  6820d15100           push 0x51d120
// 007cf7a5  6854e1e100           push 0xe1e154
// 007cf7aa  e8f11dc3ff           call 0x4015a0
// 007cf7af  83c408               add esp, 8
// 007cf7b2  e9b9c0d4ff           jmp 0x51b870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
