// roc 2010-06 004af9b0  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004af9b0
//
// 004af9b0  68c0494a00           push 0x4a49c0
// 004af9b5  68543ec000           push 0xc03e54
// 004af9ba  e8d11cf5ff           call 0x401690
// 004af9bf  83c408               add esp, 8
// 004af9c2  e95941ffff           jmp 0x4a3b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
