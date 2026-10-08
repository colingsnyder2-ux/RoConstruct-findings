// roc 2012-06 0075f640  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0075f640
//
// 0075f640  6830f67500           push 0x75f630
// 0075f645  68f46ae300           push 0xe36af4
// 0075f64a  e8511fcaff           call 0x4015a0
// 0075f64f  83c408               add esp, 8
// 0075f652  e969ffffff           jmp 0x75f5c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
