// roc 2009-06 006279c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006279c0
//
// 006279c0  6820716200           push 0x627120
// 006279c5  6804b6a400           push 0xa4b604
// 006279ca  e8419dddff           call 0x401710
// 006279cf  83c408               add esp, 8
// 006279d2  e9d9f5ffff           jmp 0x626fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
