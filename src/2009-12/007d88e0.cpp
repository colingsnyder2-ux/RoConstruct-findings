// roc 2009-12 007d88e0  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d88e0
//
// 007d88e0  68a0847d00           push 0x7d84a0
// 007d88e5  68348fb900           push 0xb98f34
// 007d88ea  e8418dc2ff           call 0x401630
// 007d88ef  83c408               add esp, 8
// 007d88f2  e909f8ffff           jmp 0x7d8100
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
