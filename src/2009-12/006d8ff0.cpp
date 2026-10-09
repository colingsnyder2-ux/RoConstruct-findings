// roc 2009-12 006d8ff0  unit: N::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d8ff0
//
// 006d8ff0  68e08f6d00           push 0x6d8fe0
// 006d8ff5  68ac30b900           push 0xb930ac
// 006d8ffa  e83186d2ff           call 0x401630
// 006d8fff  83c408               add esp, 8
// 006d9002  e969ffffff           jmp 0x6d8f70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
