// roc 2009-12 006d8f50  unit: H::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d8f50
//
// 006d8f50  68408f6d00           push 0x6d8f40
// 006d8f55  68a030b900           push 0xb930a0
// 006d8f5a  e8d186d2ff           call 0x401630
// 006d8f5f  83c408               add esp, 8
// 006d8f62  e969ffffff           jmp 0x6d8ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
