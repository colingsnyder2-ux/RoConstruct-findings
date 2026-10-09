// roc 2009-12 0065ccb0  unit: RBX::N$1?sDoubleConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065ccb0
//
// 0065ccb0  68109c6400           push 0x649c10
// 0065ccb5  689860b800           push 0xb86098
// 0065ccba  e87149daff           call 0x401630
// 0065ccbf  83c408               add esp, 8
// 0065ccc2  e989cbfeff           jmp 0x649850
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
