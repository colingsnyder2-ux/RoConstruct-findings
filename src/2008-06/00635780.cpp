// roc 2008-06 00635780  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635780
//
// 00635780  6850cb9700           push 0x97cb50
// 00635785  6840356300           push 0x633540
// 0063578a  e8a11bf2ff           call 0x557330
// 0063578f  83c408               add esp, 8
// 00635792  e959daffff           jmp 0x6331f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
