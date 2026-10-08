// roc 2009-06 0063d1e0  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0063d1e0
//
// 0063d1e0  68f0964200           push 0x4296f0
// 0063d1e5  6898a2a300           push 0xa3a298
// 0063d1ea  e82145dcff           call 0x401710
// 0063d1ef  83c408               add esp, 8
// 0063d1f2  e979acdeff           jmp 0x427e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
