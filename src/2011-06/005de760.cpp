// roc 2011-06 005de760  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de760
//
// 005de760  6810ea4600           push 0x46ea10
// 005de765  68d83dcb00           push 0xcb3dd8
// 005de76a  e8a12ee2ff           call 0x401610
// 005de76f  83c408               add esp, 8
// 005de772  e93902e9ff           jmp 0x46e9b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
