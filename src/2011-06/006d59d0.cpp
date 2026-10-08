// roc 2011-06 006d59d0  unit: RBX::VManualGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d59d0
//
// 006d59d0  6820574f00           push 0x4f5720
// 006d59d5  680483cb00           push 0xcb8304
// 006d59da  e831bcd2ff           call 0x401610
// 006d59df  83c408               add esp, 8
// 006d59e2  e9a9ebe1ff           jmp 0x4f4590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
