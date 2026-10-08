// roc 2012-06 006ef2d0  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ef2d0
//
// 006ef2d0  68c0764200           push 0x4276c0
// 006ef2d5  686082e100           push 0xe18260
// 006ef2da  e8c122d1ff           call 0x4015a0
// 006ef2df  83c408               add esp, 8
// 006ef2e2  e95982d3ff           jmp 0x427540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
