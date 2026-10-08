// roc 2007-08 0059d5e0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d5e0
//
// 0059d5e0  6894dc8b00           push 0x8bdc94
// 0059d5e5  6810794800           push 0x487910
// 0059d5ea  e8317f1800           call 0x725520
// 0059d5ef  83c408               add esp, 8
// 0059d5f2  e9f996eeff           jmp 0x486cf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
