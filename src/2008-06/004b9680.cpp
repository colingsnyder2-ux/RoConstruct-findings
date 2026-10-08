// roc 2008-06 004b9680  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9680
//
// 004b9680  680c189700           push 0x97180c
// 004b9685  6870964b00           push 0x4b9670
// 004b968a  e8a1dc0900           call 0x557330
// 004b968f  83c408               add esp, 8
// 004b9692  e939ffffff           jmp 0x4b95d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
