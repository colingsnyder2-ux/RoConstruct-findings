// roc 2009-12 0065bed0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065bed0
//
// 0065bed0  68b09b6400           push 0x649bb0
// 0065bed5  688060b800           push 0xb86080
// 0065beda  e85157daff           call 0x401630
// 0065bedf  83c408               add esp, 8
// 0065bee2  e9c9d6feff           jmp 0x6495b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
