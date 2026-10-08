// roc 2008-06 005b1700  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1700
//
// 005b1700  6850d19600           push 0x96d150
// 005b1705  68b0064300           push 0x4306b0
// 005b170a  e8215cfaff           call 0x557330
// 005b170f  83c408               add esp, 8
// 005b1712  e9e9d8e7ff           jmp 0x42f000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
