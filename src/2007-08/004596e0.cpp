// roc 2007-08 004596e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004596e0
//
// 004596e0  68d0bf8b00           push 0x8bbfd0
// 004596e5  6870864500           push 0x458670
// 004596ea  e831be2c00           call 0x725520
// 004596ef  83c408               add esp, 8
// 004596f2  e979eaffff           jmp 0x458170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
