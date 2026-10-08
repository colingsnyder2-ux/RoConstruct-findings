// roc 2007-08 005f18c0  unit: RBX::M$1?sFloatValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f18c0
//
// 005f18c0  68f0778c00           push 0x8c77f0
// 005f18c5  68400c5f00           push 0x5f0c40
// 005f18ca  e8513c1300           call 0x725520
// 005f18cf  83c408               add esp, 8
// 005f18d2  e949edffff           jmp 0x5f0620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
