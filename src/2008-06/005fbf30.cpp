// roc 2008-06 005fbf30  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fbf30
//
// 005fbf30  6808529700           push 0x975208
// 005fbf35  6810665700           push 0x576610
// 005fbf3a  e8f1b3f5ff           call 0x557330
// 005fbf3f  83c408               add esp, 8
// 005fbf42  e90996f7ff           jmp 0x575550
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
