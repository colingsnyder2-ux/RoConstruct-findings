// roc 2011-06 006d3ac0  unit: RBX::VRotateV::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3ac0
//
// 006d3ac0  6860574f00           push 0x4f5760
// 006d3ac5  681483cb00           push 0xcb8314
// 006d3aca  e841dbd2ff           call 0x401610
// 006d3acf  83c408               add esp, 8
// 006d3ad2  e9790ce2ff           jmp 0x4f4750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
