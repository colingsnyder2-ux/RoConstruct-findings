// roc 2012-06 007f7640  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f7640
//
// 007f7640  68c01a5400           push 0x541ac0
// 007f7645  68d815e200           push 0xe215d8
// 007f764a  e8519fc0ff           call 0x4015a0
// 007f764f  83c408               add esp, 8
// 007f7652  e9f992d4ff           jmp 0x540950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
