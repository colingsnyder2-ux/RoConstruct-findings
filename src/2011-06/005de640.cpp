// roc 2011-06 005de640  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de640
//
// 005de640  68400e5d00           push 0x5d0e40
// 005de645  6858a3cc00           push 0xcca358
// 005de64a  e8c12fe2ff           call 0x401610
// 005de64f  83c408               add esp, 8
// 005de652  e98927ffff           jmp 0x5d0de0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
