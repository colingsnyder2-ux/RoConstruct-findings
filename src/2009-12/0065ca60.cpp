// roc 2009-12 0065ca60  unit: RBX::H$1?sIntConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065ca60
//
// 0065ca60  68009c6400           push 0x649c00
// 0065ca65  689460b800           push 0xb86094
// 0065ca6a  e8c14bdaff           call 0x401630
// 0065ca6f  83c408               add esp, 8
// 0065ca72  e969cdfeff           jmp 0x6497e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
