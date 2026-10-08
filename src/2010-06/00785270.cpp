// roc 2010-06 00785270  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785270
//
// 00785270  6860527800           push 0x785260
// 00785275  689c35c200           push 0xc2359c
// 0078527a  e811c4c7ff           call 0x401690
// 0078527f  83c408               add esp, 8
// 00785282  e929ffffff           jmp 0x7851b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
