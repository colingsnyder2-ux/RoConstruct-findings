// roc 2011-06 005b7fe0  unit: RBX::VSettings::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b7fe0
//
// 005b7fe0  68d07f5b00           push 0x5b7fd0
// 005b7fe5  68cce0cb00           push 0xcbe0cc
// 005b7fea  e82196e4ff           call 0x401610
// 005b7fef  83c408               add esp, 8
// 005b7ff2  e959ffffff           jmp 0x5b7f50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
