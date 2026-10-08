// roc 2010-06 006686e0  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006686e0
//
// 006686e0  6880494a00           push 0x4a4980
// 006686e5  68443ec000           push 0xc03e44
// 006686ea  e8a18fd9ff           call 0x401690
// 006686ef  83c408               add esp, 8
// 006686f2  e969b2e3ff           jmp 0x4a3960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
