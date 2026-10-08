// roc 2010-06 005fe4b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe4b0
//
// 005fe4b0  68c0d65f00           push 0x5fd6c0
// 005fe4b5  68d89bc100           push 0xc19bd8
// 005fe4ba  e8d131e0ff           call 0x401690
// 005fe4bf  83c408               add esp, 8
// 005fe4c2  e949efffff           jmp 0x5fd410
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
