// roc 2008-06 00635500  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635500
//
// 00635500  684ccb9700           push 0x97cb4c
// 00635505  6830356300           push 0x633530
// 0063550a  e8211ef2ff           call 0x557330
// 0063550f  83c408               add esp, 8
// 00635512  e969dcffff           jmp 0x633180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
