// roc 2011-06 006673e0  unit: RBX::VWidget::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006673e0
//
// 006673e0  6830706600           push 0x667030
// 006673e5  6828ddcc00           push 0xccdd28
// 006673ea  e821a2d9ff           call 0x401610
// 006673ef  83c408               add esp, 8
// 006673f2  e999fbffff           jmp 0x666f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
