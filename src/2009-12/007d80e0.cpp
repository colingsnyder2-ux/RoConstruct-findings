// roc 2009-12 007d80e0  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d80e0
//
// 007d80e0  68a0807d00           push 0x7d80a0
// 007d80e5  681c8fb900           push 0xb98f1c
// 007d80ea  e84195c2ff           call 0x401630
// 007d80ef  83c408               add esp, 8
// 007d80f2  e939ffffff           jmp 0x7d8030
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
