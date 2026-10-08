// roc 2011-06 006d3ae0  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3ae0
//
// 006d3ae0  6870574f00           push 0x4f5770
// 006d3ae5  681883cb00           push 0xcb8318
// 006d3aea  e821dbd2ff           call 0x401610
// 006d3aef  83c408               add esp, 8
// 006d3af2  e9c90ce2ff           jmp 0x4f47c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
