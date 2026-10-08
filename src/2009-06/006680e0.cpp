// roc 2009-06 006680e0  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006680e0
//
// 006680e0  68f0db4700           push 0x47dbf0
// 006680e5  682cc6a300           push 0xa3c62c
// 006680ea  e82196d9ff           call 0x401710
// 006680ef  83c408               add esp, 8
// 006680f2  e98956e1ff           jmp 0x47d780
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
