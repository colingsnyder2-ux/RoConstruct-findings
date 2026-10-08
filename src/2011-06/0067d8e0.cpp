// roc 2011-06 0067d8e0  unit: RBX::VStatusInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067d8e0
//
// 0067d8e0  68b0534900           push 0x4953b0
// 0067d8e5  680843cb00           push 0xcb4308
// 0067d8ea  e8213dd8ff           call 0x401610
// 0067d8ef  83c408               add esp, 8
// 0067d8f2  e98975e1ff           jmp 0x494e80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
