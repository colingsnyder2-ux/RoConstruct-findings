// roc 2008-06 0062d3e0  unit: RBX::VForceField::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d3e0
//
// 0062d3e0  6804789700           push 0x977804
// 0062d3e5  68b0ff5b00           push 0x5bffb0
// 0062d3ea  e8419ff2ff           call 0x557330
// 0062d3ef  83c408               add esp, 8
// 0062d3f2  e9c925f9ff           jmp 0x5bf9c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
