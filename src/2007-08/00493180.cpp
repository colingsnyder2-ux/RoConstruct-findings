// roc 2007-08 00493180  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493180
//
// 00493180  6888af8b00           push 0x8baf88
// 00493185  6890d24000           push 0x40d290
// 0049318a  e891232900           call 0x725520
// 0049318f  83c408               add esp, 8
// 00493192  e9699cf7ff           jmp 0x40ce00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
