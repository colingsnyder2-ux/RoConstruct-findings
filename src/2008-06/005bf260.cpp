// roc 2008-06 005bf260  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf260
//
// 005bf260  680cdd9600           push 0x96dd0c
// 005bf265  68b0a84400           push 0x44a8b0
// 005bf26a  e8c180f9ff           call 0x557330
// 005bf26f  83c408               add esp, 8
// 005bf272  e969aee8ff           jmp 0x44a0e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
