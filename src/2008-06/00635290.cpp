// roc 2008-06 00635290  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635290
//
// 00635290  6848cb9700           push 0x97cb48
// 00635295  6820356300           push 0x633520
// 0063529a  e89120f2ff           call 0x557330
// 0063529f  83c408               add esp, 8
// 006352a2  e969deffff           jmp 0x633110
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
