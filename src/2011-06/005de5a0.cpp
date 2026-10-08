// roc 2011-06 005de5a0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de5a0
//
// 005de5a0  68600e5900           push 0x590e60
// 005de5a5  6800b1cb00           push 0xcbb100
// 005de5aa  e86130e2ff           call 0x401610
// 005de5af  83c408               add esp, 8
// 005de5b2  e94928fbff           jmp 0x590e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
