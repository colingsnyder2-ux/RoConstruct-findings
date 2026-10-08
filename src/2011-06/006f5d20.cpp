// roc 2011-06 006f5d20  unit: RBX::VDialogChoice::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f5d20
//
// 006f5d20  68d0125c00           push 0x5c12d0
// 006f5d25  68c0e5cb00           push 0xcbe5c0
// 006f5d2a  e8e1b8d0ff           call 0x401610
// 006f5d2f  83c408               add esp, 8
// 006f5d32  e9099decff           jmp 0x5bfa40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
