// roc 2009-12 00501fa0  unit: RBX::VPants::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00501fa0
//
// 00501fa0  68e0684f00           push 0x4f68e0
// 00501fa5  686cdeb700           push 0xb7de6c
// 00501faa  e881f6efff           call 0x401630
// 00501faf  83c408               add esp, 8
// 00501fb2  e9793affff           jmp 0x4f5a30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
