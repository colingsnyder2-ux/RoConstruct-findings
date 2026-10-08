// roc 2009-06 006252e0  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006252e0
//
// 006252e0  6820734100           push 0x417320
// 006252e5  6858a1a300           push 0xa3a158
// 006252ea  e821c4ddff           call 0x401710
// 006252ef  83c408               add esp, 8
// 006252f2  e9f91ddfff           jmp 0x4170f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
