// roc 2009-12 006fe6b0  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe6b0
//
// 006fe6b0  68d0684f00           push 0x4f68d0
// 006fe6b5  6868deb700           push 0xb7de68
// 006fe6ba  e8712fd0ff           call 0x401630
// 006fe6bf  83c408               add esp, 8
// 006fe6c2  e9f972dfff           jmp 0x4f59c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
