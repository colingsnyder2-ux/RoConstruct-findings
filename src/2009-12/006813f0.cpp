// roc 2009-12 006813f0  unit: RBX::VScript::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006813f0
//
// 006813f0  68e03a4100           push 0x413ae0
// 006813f5  6814a1b700           push 0xb7a114
// 006813fa  e83102d8ff           call 0x401630
// 006813ff  83c408               add esp, 8
// 00681402  e92923d9ff           jmp 0x413730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
