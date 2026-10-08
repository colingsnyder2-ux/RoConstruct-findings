// roc 2011-06 006d39e0  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d39e0
//
// 006d39e0  6830574f00           push 0x4f5730
// 006d39e5  680883cb00           push 0xcb8308
// 006d39ea  e821dcd2ff           call 0x401610
// 006d39ef  83c408               add esp, 8
// 006d39f2  e9090ce2ff           jmp 0x4f4600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
