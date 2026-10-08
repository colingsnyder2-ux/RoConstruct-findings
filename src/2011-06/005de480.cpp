// roc 2011-06 005de480  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de480
//
// 005de480  68800d5900           push 0x590d80
// 005de485  68f8b0cb00           push 0xcbb0f8
// 005de48a  e88131e2ff           call 0x401610
// 005de48f  83c408               add esp, 8
// 005de492  e98928fbff           jmp 0x590d20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
