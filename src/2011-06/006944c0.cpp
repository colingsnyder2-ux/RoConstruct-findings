// roc 2011-06 006944c0  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006944c0
//
// 006944c0  6860594a00           push 0x4a5960
// 006944c5  680054cb00           push 0xcb5400
// 006944ca  e841d1d6ff           call 0x401610
// 006944cf  83c408               add esp, 8
// 006944d2  e909fde0ff           jmp 0x4a41e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
