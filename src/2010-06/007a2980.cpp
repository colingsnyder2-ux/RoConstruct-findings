// roc 2010-06 007a2980  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a2980
//
// 007a2980  68000e7a00           push 0x7a0e00
// 007a2985  68bc44c200           push 0xc244bc
// 007a298a  e801edc5ff           call 0x401690
// 007a298f  83c408               add esp, 8
// 007a2992  e9f9e3ffff           jmp 0x7a0d90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
