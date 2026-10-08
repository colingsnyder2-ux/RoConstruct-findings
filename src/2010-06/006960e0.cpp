// roc 2010-06 006960e0  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006960e0
//
// 006960e0  68106e4e00           push 0x4e6e10
// 006960e5  688466c000           push 0xc06684
// 006960ea  e8a1b5d6ff           call 0x401690
// 006960ef  83c408               add esp, 8
// 006960f2  e9c9fce4ff           jmp 0x4e5dc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
