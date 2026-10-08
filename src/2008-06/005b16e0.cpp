// roc 2008-06 005b16e0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b16e0
//
// 005b16e0  684cd19600           push 0x96d14c
// 005b16e5  68a0064300           push 0x4306a0
// 005b16ea  e8415cfaff           call 0x557330
// 005b16ef  83c408               add esp, 8
// 005b16f2  e999d8e7ff           jmp 0x42ef90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
