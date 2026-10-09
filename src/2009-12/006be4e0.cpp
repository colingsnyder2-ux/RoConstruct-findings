// roc 2009-12 006be4e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006be4e0
//
// 006be4e0  6820674500           push 0x456720
// 006be4e5  68f4b7b700           push 0xb7b7f4
// 006be4ea  e84131d4ff           call 0x401630
// 006be4ef  83c408               add esp, 8
// 006be4f2  e9096ad9ff           jmp 0x454f00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
