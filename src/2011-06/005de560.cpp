// roc 2011-06 005de560  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de560
//
// 005de560  6800095d00           push 0x5d0900
// 005de565  6828a3cc00           push 0xcca328
// 005de56a  e8a130e2ff           call 0x401610
// 005de56f  83c408               add esp, 8
// 005de572  e92923ffff           jmp 0x5d08a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
