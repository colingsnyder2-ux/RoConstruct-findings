// roc 2008-06 00618a20  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618a20
//
// 00618a20  68746a9700           push 0x976a74
// 00618a25  68b0095a00           push 0x5a09b0
// 00618a2a  e801e9f3ff           call 0x557330
// 00618a2f  83c408               add esp, 8
// 00618a32  e9e978f8ff           jmp 0x5a0320
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
