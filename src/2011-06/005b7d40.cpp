// roc 2011-06 005b7d40  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b7d40
//
// 005b7d40  68307d5b00           push 0x5b7d30
// 005b7d45  68c0e0cb00           push 0xcbe0c0
// 005b7d4a  e8c198e4ff           call 0x401610
// 005b7d4f  83c408               add esp, 8
// 005b7d52  e969ffffff           jmp 0x5b7cc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
