// roc 2009-06 006792e0  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006792e0
//
// 006792e0  68f0414e00           push 0x4e41f0
// 006792e5  68a8f2a300           push 0xa3f2a8
// 006792ea  e82184d8ff           call 0x401710
// 006792ef  83c408               add esp, 8
// 006792f2  e9f99fe6ff           jmp 0x4e32f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
