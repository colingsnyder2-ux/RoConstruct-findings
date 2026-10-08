// roc 2010-06 00669e90  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00669e90
//
// 00669e90  68d0494a00           push 0x4a49d0
// 00669e95  68583ec000           push 0xc03e58
// 00669e9a  e8f177d9ff           call 0x401690
// 00669e9f  83c408               add esp, 8
// 00669ea2  e9e99ce3ff           jmp 0x4a3b90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
