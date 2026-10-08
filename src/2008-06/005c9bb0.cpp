// roc 2008-06 005c9bb0  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9bb0
//
// 005c9bb0  68d4979700           push 0x9797d4
// 005c9bb5  68a09b5c00           push 0x5c9ba0
// 005c9bba  e871d7f8ff           call 0x557330
// 005c9bbf  83c408               add esp, 8
// 005c9bc2  e959ffffff           jmp 0x5c9b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
