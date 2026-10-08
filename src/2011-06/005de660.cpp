// roc 2011-06 005de660  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de660
//
// 005de660  68b00e5d00           push 0x5d0eb0
// 005de665  685ca3cc00           push 0xcca35c
// 005de66a  e8a12fe2ff           call 0x401610
// 005de66f  83c408               add esp, 8
// 005de672  e9d927ffff           jmp 0x5d0e50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
