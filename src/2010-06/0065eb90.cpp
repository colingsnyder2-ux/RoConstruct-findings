// roc 2010-06 0065eb90  unit: RBX::VBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065eb90
//
// 0065eb90  6830494a00           push 0x4a4930
// 0065eb95  68303ec000           push 0xc03e30
// 0065eb9a  e8f12adaff           call 0x401690
// 0065eb9f  83c408               add esp, 8
// 0065eba2  e9894be4ff           jmp 0x4a3730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
