// roc 2011-06 005de720  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de720
//
// 005de720  68c01e5a00           push 0x5a1ec0
// 005de725  6884d3cb00           push 0xcbd384
// 005de72a  e8e12ee2ff           call 0x401610
// 005de72f  83c408               add esp, 8
// 005de732  e92937fcff           jmp 0x5a1e60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
