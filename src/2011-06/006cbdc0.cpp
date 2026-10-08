// roc 2011-06 006cbdc0  unit: RBX::VTextBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cbdc0
//
// 006cbdc0  6880484e00           push 0x4e4880
// 006cbdc5  68e47dcb00           push 0xcb7de4
// 006cbdca  e84158d3ff           call 0x401610
// 006cbdcf  83c408               add esp, 8
// 006cbdd2  e92988e1ff           jmp 0x4e4600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
