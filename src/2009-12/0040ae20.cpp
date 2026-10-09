// roc 2009-12 0040ae20  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040ae20
//
// 0040ae20  6810ac4000           push 0x40ac10
// 0040ae25  68389ab700           push 0xb79a38
// 0040ae2a  e80168ffff           call 0x401630
// 0040ae2f  83c408               add esp, 8
// 0040ae32  e969fdffff           jmp 0x40aba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
