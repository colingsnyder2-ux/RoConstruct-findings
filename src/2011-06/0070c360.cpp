// roc 2011-06 0070c360  unit: RBX::PART::VWedge::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070c360
//
// 0070c360  6840145c00           push 0x5c1440
// 0070c365  681ce6cb00           push 0xcbe61c
// 0070c36a  e8a152cfff           call 0x401610
// 0070c36f  83c408               add esp, 8
// 0070c372  e9d940ebff           jmp 0x5c0450
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
