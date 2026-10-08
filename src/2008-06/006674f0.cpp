// roc 2008-06 006674f0  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006674f0
//
// 006674f0  68d8d99700           push 0x97d9d8
// 006674f5  68a0746600           push 0x6674a0
// 006674fa  e831feeeff           call 0x557330
// 006674ff  83c408               add esp, 8
// 00667502  e929ffffff           jmp 0x667430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
