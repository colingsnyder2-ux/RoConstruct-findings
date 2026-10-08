// roc 2010-06 006dde30  unit: RBX::VGuiMain::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006dde30
//
// 006dde30  68e0c55a00           push 0x5ac5e0
// 006dde35  6838c2c000           push 0xc0c238
// 006dde3a  e85138d2ff           call 0x401690
// 006dde3f  83c408               add esp, 8
// 006dde42  e9a9dbecff           jmp 0x5ab9f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
