// roc 2009-12 0065c120  unit: G3D::VRay::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065c120
//
// 0065c120  68c09b6400           push 0x649bc0
// 0065c125  688460b800           push 0xb86084
// 0065c12a  e80155daff           call 0x401630
// 0065c12f  83c408               add esp, 8
// 0065c132  e9e9d4feff           jmp 0x649620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
