// roc 2009-12 0065b590  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065b590
//
// 0065b590  68709b6400           push 0x649b70
// 0065b595  687060b800           push 0xb86070
// 0065b59a  e89160daff           call 0x401630
// 0065b59f  83c408               add esp, 8
// 0065b5a2  e949defeff           jmp 0x6493f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
