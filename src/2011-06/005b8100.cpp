// roc 2011-06 005b8100  unit: RBX::VSettings::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b8100
//
// 005b8100  68f0805b00           push 0x5b80f0
// 005b8105  68d8e0cb00           push 0xcbe0d8
// 005b810a  e80195e4ff           call 0x401610
// 005b810f  83c408               add esp, 8
// 005b8112  e959ffffff           jmp 0x5b8070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
