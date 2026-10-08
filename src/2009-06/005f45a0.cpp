// roc 2009-06 005f45a0  unit: RBX::VObjectValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f45a0
//
// 005f45a0  6840a25e00           push 0x5ea240
// 005f45a5  68dc49a400           push 0xa449dc
// 005f45aa  e861d1e0ff           call 0x401710
// 005f45af  83c408               add esp, 8
// 005f45b2  e9a956ffff           jmp 0x5e9c60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
