// roc 2011-06 005de600  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de600
//
// 005de600  68600d5d00           push 0x5d0d60
// 005de605  6850a3cc00           push 0xcca350
// 005de60a  e80130e2ff           call 0x401610
// 005de60f  83c408               add esp, 8
// 005de612  e9e926ffff           jmp 0x5d0d00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
