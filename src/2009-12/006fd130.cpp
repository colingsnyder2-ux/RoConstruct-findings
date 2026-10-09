// roc 2009-12 006fd130  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fd130
//
// 006fd130  68b0684f00           push 0x4f68b0
// 006fd135  6860deb700           push 0xb7de60
// 006fd13a  e8f144d0ff           call 0x401630
// 006fd13f  83c408               add esp, 8
// 006fd142  e99987dfff           jmp 0x4f58e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
