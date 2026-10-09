// roc 2009-12 0065ba30  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065ba30
//
// 0065ba30  68909b6400           push 0x649b90
// 0065ba35  687860b800           push 0xb86078
// 0065ba3a  e8f15bdaff           call 0x401630
// 0065ba3f  83c408               add esp, 8
// 0065ba42  e989dafeff           jmp 0x6494d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
