// roc 2010-06 00669eb0  unit: RBX::VSkin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669eb0
//
// 00669eb0  68e0494a00           push 0x4a49e0
// 00669eb5  685c3ec000           push 0xc03e5c
// 00669eba  e8d177d9ff           call 0x401690
// 00669ebf  83c408               add esp, 8
// 00669ec2  e9399de3ff           jmp 0x4a3c00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
