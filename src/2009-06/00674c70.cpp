// roc 2009-06 00674c70  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00674c70
//
// 00674c70  68d0484b00           push 0x4b48d0
// 00674c75  6808d5a300           push 0xa3d508
// 00674c7a  e891cad8ff           call 0x401710
// 00674c7f  83c408               add esp, 8
// 00674c82  e9b9f1e3ff           jmp 0x4b3e40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
