// roc 2009-12 0052cd20  unit: RBX::VHint::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052cd20
//
// 0052cd20  68c0be5200           push 0x52bec0
// 0052cd25  686c01b800           push 0xb8016c
// 0052cd2a  e80149edff           call 0x401630
// 0052cd2f  83c408               add esp, 8
// 0052cd32  e949eeffff           jmp 0x52bb80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
