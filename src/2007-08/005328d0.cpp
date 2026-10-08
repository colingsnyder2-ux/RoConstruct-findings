// roc 2007-08 005328d0  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005328d0
//
// 005328d0  68c0ae8b00           push 0x8baec0
// 005328d5  68a0354000           push 0x4035a0
// 005328da  e8412c1f00           call 0x725520
// 005328df  83c408               add esp, 8
// 005328e2  e939fdecff           jmp 0x402620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
