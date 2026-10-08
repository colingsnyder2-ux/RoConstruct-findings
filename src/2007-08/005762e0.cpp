// roc 2007-08 005762e0  unit: RBX::VPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005762e0
//
// 005762e0  6884b48b00           push 0x8bb484
// 005762e5  6820c14100           push 0x41c120
// 005762ea  e831f21a00           call 0x725520
// 005762ef  83c408               add esp, 8
// 005762f2  e9595ceaff           jmp 0x41bf50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
