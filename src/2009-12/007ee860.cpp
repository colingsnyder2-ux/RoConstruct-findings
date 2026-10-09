// roc 2009-12 007ee860  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ee860
//
// 007ee860  6840cc7e00           push 0x7ecc40
// 007ee865  68909db900           push 0xb99d90
// 007ee86a  e8c12dc1ff           call 0x401630
// 007ee86f  83c408               add esp, 8
// 007ee872  e959e3ffff           jmp 0x7ecbd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
