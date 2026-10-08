// roc 2012-06 007a07d0  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a07d0
//
// 007a07d0  6860047a00           push 0x7a0460
// 007a07d5  68a0a2e400           push 0xe4a2a0
// 007a07da  e8c10dc6ff           call 0x4015a0
// 007a07df  83c408               add esp, 8
// 007a07e2  e989f9ffff           jmp 0x7a0170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
