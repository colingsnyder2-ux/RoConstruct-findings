// roc 2010-06 005f64e0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f64e0
//
// 005f64e0  6830764100           push 0x417630
// 005f64e5  684807c000           push 0xc00748
// 005f64ea  e8a1b1e0ff           call 0x401690
// 005f64ef  83c408               add esp, 8
// 005f64f2  e9690fe2ff           jmp 0x417460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
