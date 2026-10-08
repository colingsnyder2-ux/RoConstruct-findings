// roc 2011-06 005de540  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de540
//
// 005de540  6860065d00           push 0x5d0660
// 005de545  6810a3cc00           push 0xcca310
// 005de54a  e8c130e2ff           call 0x401610
// 005de54f  83c408               add esp, 8
// 005de552  e9a920ffff           jmp 0x5d0600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
