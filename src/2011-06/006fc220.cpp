// roc 2011-06 006fc220  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fc220
//
// 006fc220  6860135c00           push 0x5c1360
// 006fc225  68e4e5cb00           push 0xcbe5e4
// 006fc22a  e8e153d0ff           call 0x401610
// 006fc22f  83c408               add esp, 8
// 006fc232  e9f93becff           jmp 0x5bfe30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
