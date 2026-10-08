// roc 2012-06 008f4ad0  unit: RBX::VPartAdornment::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f4ad0
//
// 008f4ad0  68c04a8f00           push 0x8f4ac0
// 008f4ad5  68c861e500           push 0xe561c8
// 008f4ada  e8c1cab0ff           call 0x4015a0
// 008f4adf  83c408               add esp, 8
// 008f4ae2  e969ffffff           jmp 0x8f4a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
