// roc 2010-06 005e8200  unit: RBX::VModelInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e8200
//
// 005e8200  68b03c4100           push 0x413cb0
// 005e8205  68b006c000           push 0xc006b0
// 005e820a  e88194e1ff           call 0x401690
// 005e820f  83c408               add esp, 8
// 005e8212  e979b7e2ff           jmp 0x413990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
