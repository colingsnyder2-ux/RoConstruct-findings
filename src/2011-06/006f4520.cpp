// roc 2011-06 006f4520  unit: RBX::VDialogRoot::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f4520
//
// 006f4520  68c0125c00           push 0x5c12c0
// 006f4525  68bce5cb00           push 0xcbe5bc
// 006f452a  e8e1d0d0ff           call 0x401610
// 006f452f  83c408               add esp, 8
// 006f4532  e999b4ecff           jmp 0x5bf9d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
