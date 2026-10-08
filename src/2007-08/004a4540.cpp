// roc 2007-08 004a4540  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4540
//
// 004a4540  68f4e28b00           push 0x8be2f4
// 004a4545  68808d4900           push 0x498d80
// 004a454a  e8d10f2800           call 0x725520
// 004a454f  83c408               add esp, 8
// 004a4552  e9a947ffff           jmp 0x498d00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
