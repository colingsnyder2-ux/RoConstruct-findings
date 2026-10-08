// roc 2007-08 005f1880  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1880
//
// 005f1880  68e8778c00           push 0x8c77e8
// 005f1885  68200c5f00           push 0x5f0c20
// 005f188a  e8913c1300           call 0x725520
// 005f188f  83c408               add esp, 8
// 005f1892  e9a9ecffff           jmp 0x5f0540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
