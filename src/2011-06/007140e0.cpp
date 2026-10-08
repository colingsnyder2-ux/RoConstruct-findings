// roc 2011-06 007140e0  unit: RBX::VSparkles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007140e0
//
// 007140e0  68b0145c00           push 0x5c14b0
// 007140e5  6838e6cb00           push 0xcbe638
// 007140ea  e821d5ceff           call 0x401610
// 007140ef  83c408               add esp, 8
// 007140f2  e969c6eaff           jmp 0x5c0760
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
