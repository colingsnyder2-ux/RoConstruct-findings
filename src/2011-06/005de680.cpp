// roc 2011-06 005de680  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de680
//
// 005de680  68200f5d00           push 0x5d0f20
// 005de685  6860a3cc00           push 0xcca360
// 005de68a  e8812fe2ff           call 0x401610
// 005de68f  83c408               add esp, 8
// 005de692  e92928ffff           jmp 0x5d0ec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
