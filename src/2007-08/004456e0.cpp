// roc 2007-08 004456e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004456e0
//
// 004456e0  68e0ba8b00           push 0x8bbae0
// 004456e5  68b04f4400           push 0x444fb0
// 004456ea  e831fe2d00           call 0x725520
// 004456ef  83c408               add esp, 8
// 004456f2  e979f7ffff           jmp 0x444e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
