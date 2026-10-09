// roc 2009-12 007008e0  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007008e0
//
// 007008e0  6830694f00           push 0x4f6930
// 007008e5  6880deb700           push 0xb7de80
// 007008ea  e8410dd0ff           call 0x401630
// 007008ef  83c408               add esp, 8
// 007008f2  e96953dfff           jmp 0x4f5c60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
