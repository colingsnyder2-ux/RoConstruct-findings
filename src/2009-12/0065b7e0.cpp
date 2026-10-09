// roc 2009-12 0065b7e0  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065b7e0
//
// 0065b7e0  68809b6400           push 0x649b80
// 0065b7e5  687460b800           push 0xb86074
// 0065b7ea  e8415edaff           call 0x401630
// 0065b7ef  83c408               add esp, 8
// 0065b7f2  e969dcfeff           jmp 0x649460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
