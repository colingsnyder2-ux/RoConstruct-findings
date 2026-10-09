// roc 2009-12 006fe6f0  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fe6f0
//
// 006fe6f0  6800694f00           push 0x4f6900
// 006fe6f5  6874deb700           push 0xb7de74
// 006fe6fa  e8312fd0ff           call 0x401630
// 006fe6ff  83c408               add esp, 8
// 006fe702  e90974dfff           jmp 0x4f5b10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
