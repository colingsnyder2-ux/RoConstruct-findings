// roc 2012-06 006c7570  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c7570
//
// 006c7570  6860756c00           push 0x6c7560
// 006c7575  68d8e6e200           push 0xe2e6d8
// 006c757a  e821a0d3ff           call 0x4015a0
// 006c757f  83c408               add esp, 8
// 006c7582  e949ffffff           jmp 0x6c74d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
