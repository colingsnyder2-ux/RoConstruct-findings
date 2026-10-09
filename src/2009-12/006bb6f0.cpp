// roc 2009-12 006bb6f0  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb6f0
//
// 006bb6f0  6830364300           push 0x433630
// 006bb6f5  6878a3b700           push 0xb7a378
// 006bb6fa  e8315fd4ff           call 0x401630
// 006bb6ff  83c408               add esp, 8
// 006bb702  e9e978d7ff           jmp 0x432ff0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
