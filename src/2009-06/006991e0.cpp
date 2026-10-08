// roc 2009-06 006991e0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006991e0
//
// 006991e0  6810a15e00           push 0x5ea110
// 006991e5  689049a400           push 0xa44990
// 006991ea  e82185d6ff           call 0x401710
// 006991ef  83c408               add esp, 8
// 006991f2  e91902f5ff           jmp 0x5e9410
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
