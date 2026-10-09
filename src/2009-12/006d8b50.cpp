// roc 2009-12 006d8b50  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d8b50
//
// 006d8b50  68408b6d00           push 0x6d8b40
// 006d8b55  689430b900           push 0xb93094
// 006d8b5a  e8d18ad2ff           call 0x401630
// 006d8b5f  83c408               add esp, 8
// 006d8b62  e969ffffff           jmp 0x6d8ad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
