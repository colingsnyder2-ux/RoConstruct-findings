// roc 2007-08 005905f0  unit: RBX::VObjectValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005905f0
//
// 005905f0  68e8378c00           push 0x8c37e8
// 005905f5  6820de5800           push 0x58de20
// 005905fa  e8214f1900           call 0x725520
// 005905ff  83c408               add esp, 8
// 00590602  e919d6ffff           jmp 0x58dc20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
