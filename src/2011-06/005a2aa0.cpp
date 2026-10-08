// roc 2011-06 005a2aa0  unit: RBX::VStockSound::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a2aa0
//
// 005a2aa0  68b0ee5900           push 0x59eeb0
// 005a2aa5  6838d0cb00           push 0xcbd038
// 005a2aaa  e861ebe5ff           call 0x401610
// 005a2aaf  83c408               add esp, 8
// 005a2ab2  e9f9baffff           jmp 0x59e5b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
