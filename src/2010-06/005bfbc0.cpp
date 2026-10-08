// roc 2010-06 005bfbc0  unit: RBX::VObjectValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005bfbc0
//
// 005bfbc0  68b0c55a00           push 0x5ac5b0
// 005bfbc5  682cc2c000           push 0xc0c22c
// 005bfbca  e8c11ae4ff           call 0x401690
// 005bfbcf  83c408               add esp, 8
// 005bfbd2  e9c9bcfeff           jmp 0x5ab8a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
