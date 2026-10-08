// roc 2010-06 006936b0  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006936b0
//
// 006936b0  68a06d4e00           push 0x4e6da0
// 006936b5  686866c000           push 0xc06668
// 006936ba  e8d1dfd6ff           call 0x401690
// 006936bf  83c408               add esp, 8
// 006936c2  e9e923e5ff           jmp 0x4e5ab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
