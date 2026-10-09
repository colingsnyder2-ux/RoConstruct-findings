// roc 2009-12 007ee840  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ee840
//
// 007ee840  68c0cc7e00           push 0x7eccc0
// 007ee845  68949db900           push 0xb99d94
// 007ee84a  e8e12dc1ff           call 0x401630
// 007ee84f  83c408               add esp, 8
// 007ee852  e9f9e3ffff           jmp 0x7ecc50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
