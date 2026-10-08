// roc 2011-06 006fa050  unit: RBX::VHole::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fa050
//
// 006fa050  6830135c00           push 0x5c1330
// 006fa055  68d8e5cb00           push 0xcbe5d8
// 006fa05a  e8b175d0ff           call 0x401610
// 006fa05f  83c408               add esp, 8
// 006fa062  e9795cecff           jmp 0x5bfce0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
