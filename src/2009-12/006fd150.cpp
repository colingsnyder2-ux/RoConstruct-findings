// roc 2009-12 006fd150  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fd150
//
// 006fd150  68c0684f00           push 0x4f68c0
// 006fd155  6864deb700           push 0xb7de64
// 006fd15a  e8d144d0ff           call 0x401630
// 006fd15f  83c408               add esp, 8
// 006fd162  e9e987dfff           jmp 0x4f5950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
