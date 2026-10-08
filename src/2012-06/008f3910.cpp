// roc 2012-06 008f3910  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f3910
//
// 008f3910  68e0388f00           push 0x8f38e0
// 008f3915  684061e500           push 0xe56140
// 008f391a  e881dcb0ff           call 0x4015a0
// 008f391f  83c408               add esp, 8
// 008f3922  e949ffffff           jmp 0x8f3870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
