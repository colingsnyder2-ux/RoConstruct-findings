// roc 2009-12 0068f1e0  unit: RBX::VStarterGear::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068f1e0
//
// 0068f1e0  68f0774100           push 0x4177f0
// 0068f1e5  68c8a1b700           push 0xb7a1c8
// 0068f1ea  e84124d7ff           call 0x401630
// 0068f1ef  83c408               add esp, 8
// 0068f1f2  e9e984d8ff           jmp 0x4176e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
