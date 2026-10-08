// roc 2008-06 006307e0  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006307e0
//
// 006307e0  6818789700           push 0x977818
// 006307e5  6800005c00           push 0x5c0000
// 006307ea  e8416bf2ff           call 0x557330
// 006307ef  83c408               add esp, 8
// 006307f2  e9f9f3f8ff           jmp 0x5bfbf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
