// roc 2009-12 004774c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004774c0
//
// 004774c0  68f06e4700           push 0x476ef0
// 004774c5  6814cab700           push 0xb7ca14
// 004774ca  e861a1f8ff           call 0x401630
// 004774cf  83c408               add esp, 8
// 004774d2  e9e9f5ffff           jmp 0x476ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
