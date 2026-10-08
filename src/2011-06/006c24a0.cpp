// roc 2011-06 006c24a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c24a0
//
// 006c24a0  68a0874c00           push 0x4c87a0
// 006c24a5  681c65cb00           push 0xcb651c
// 006c24aa  e861f1d3ff           call 0x401610
// 006c24af  83c408               add esp, 8
// 006c24b2  e9494fe0ff           jmp 0x4c7400
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
