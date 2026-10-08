// roc 2011-06 00804fb0  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00804fb0
//
// 00804fb0  68b0358000           push 0x8035b0
// 00804fb5  68a871d100           push 0xd171a8
// 00804fba  e851c6bfff           call 0x401610
// 00804fbf  83c408               add esp, 8
// 00804fc2  e979e5ffff           jmp 0x803540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
