// roc 2011-06 00804f90  unit: W4_D3DFORMAT::?$EnumDesc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00804f90
//
// 00804f90  6830368000           push 0x803630
// 00804f95  68ac71d100           push 0xd171ac
// 00804f9a  e871c6bfff           call 0x401610
// 00804f9f  83c408               add esp, 8
// 00804fa2  e919e6ffff           jmp 0x8035c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
