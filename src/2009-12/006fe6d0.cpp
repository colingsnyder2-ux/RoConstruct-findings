// roc 2009-12 006fe6d0  unit: RBX::VCharacterAppearance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe6d0
//
// 006fe6d0  6860e56f00           push 0x6fe560
// 006fe6d5  68804cb900           push 0xb94c80
// 006fe6da  e8512fd0ff           call 0x401630
// 006fe6df  83c408               add esp, 8
// 006fe6e2  e9f9fcffff           jmp 0x6fe3e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
