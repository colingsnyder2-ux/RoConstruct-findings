// roc 2011-06 005de780  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de780
//
// 005de780  68d00e5900           push 0x590ed0
// 005de785  6804b1cb00           push 0xcbb104
// 005de78a  e8812ee2ff           call 0x401610
// 005de78f  83c408               add esp, 8
// 005de792  e9d926fbff           jmp 0x590e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
