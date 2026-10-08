// roc 2010-06 007a29a0  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a29a0
//
// 007a29a0  68800d7a00           push 0x7a0d80
// 007a29a5  68b844c200           push 0xc244b8
// 007a29aa  e8e1ecc5ff           call 0x401690
// 007a29af  83c408               add esp, 8
// 007a29b2  e959e3ffff           jmp 0x7a0d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
