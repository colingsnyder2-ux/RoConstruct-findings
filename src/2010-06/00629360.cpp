// roc 2010-06 00629360  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629360
//
// 00629360  68604a4300           push 0x434a60
// 00629365  683409c000           push 0xc00934
// 0062936a  e82183ddff           call 0x401690
// 0062936f  83c408               add esp, 8
// 00629372  e9b9b0e0ff           jmp 0x434430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
