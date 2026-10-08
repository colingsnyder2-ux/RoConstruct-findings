// roc 2011-06 006f0b10  unit: RBX::VClickDetector::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f0b10
//
// 006f0b10  6870125c00           push 0x5c1270
// 006f0b15  68a8e5cb00           push 0xcbe5a8
// 006f0b1a  e8f10ad1ff           call 0x401610
// 006f0b1f  83c408               add esp, 8
// 006f0b22  e979ececff           jmp 0x5bf7a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
