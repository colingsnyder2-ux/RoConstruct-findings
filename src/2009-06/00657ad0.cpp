// roc 2009-06 00657ad0  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00657ad0
//
// 00657ad0  68c07a6500           push 0x657ac0
// 00657ad5  6838caa400           push 0xa4ca38
// 00657ada  e8319cdaff           call 0x401710
// 00657adf  83c408               add esp, 8
// 00657ae2  e969ffffff           jmp 0x657a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
