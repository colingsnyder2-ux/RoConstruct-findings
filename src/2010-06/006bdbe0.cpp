// roc 2010-06 006bdbe0  unit: RBX::VClickDetector::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bdbe0
//
// 006bdbe0  6890c35a00           push 0x5ac390
// 006bdbe5  68a4c1c000           push 0xc0c1a4
// 006bdbea  e8a13ad4ff           call 0x401690
// 006bdbef  83c408               add esp, 8
// 006bdbf2  e9c9cdeeff           jmp 0x5aa9c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
