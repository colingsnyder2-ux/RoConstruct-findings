// roc 2009-12 0065c5c0  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065c5c0
//
// 0065c5c0  68e09b6400           push 0x649be0
// 0065c5c5  688c60b800           push 0xb8608c
// 0065c5ca  e86150daff           call 0x401630
// 0065c5cf  83c408               add esp, 8
// 0065c5d2  e929d1feff           jmp 0x649700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
