// roc 2012-06 00567140  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567140
//
// 00567140  68a01a5400           push 0x541aa0
// 00567145  68d015e200           push 0xe215d0
// 0056714a  e851a4e9ff           call 0x4015a0
// 0056714f  83c408               add esp, 8
// 00567152  e91997fdff           jmp 0x540870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
