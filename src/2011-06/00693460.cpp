// roc 2011-06 00693460  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00693460
//
// 00693460  6840594a00           push 0x4a5940
// 00693465  68f853cb00           push 0xcb53f8
// 0069346a  e8a1e1d6ff           call 0x401610
// 0069346f  83c408               add esp, 8
// 00693472  e9890ce1ff           jmp 0x4a4100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
