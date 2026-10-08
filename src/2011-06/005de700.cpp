// roc 2011-06 005de700  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de700
//
// 005de700  6810135d00           push 0x5d1310
// 005de705  6884a3cc00           push 0xcca384
// 005de70a  e8012fe2ff           call 0x401610
// 005de70f  83c408               add esp, 8
// 005de712  e9992bffff           jmp 0x5d12b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
