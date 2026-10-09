// roc 2009-12 006f4390  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4390
//
// 006f4390  6870684f00           push 0x4f6870
// 006f4395  6850deb700           push 0xb7de50
// 006f439a  e891d2d0ff           call 0x401630
// 006f439f  83c408               add esp, 8
// 006f43a2  e97913e0ff           jmp 0x4f5720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
