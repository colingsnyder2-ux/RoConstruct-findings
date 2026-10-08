// roc 2007-08 005949e0  unit: RBX::HingeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005949e0
//
// 005949e0  68d04d8c00           push 0x8c4dd0
// 005949e5  68103d5900           push 0x593d10
// 005949ea  e8310b1900           call 0x725520
// 005949ef  83c408               add esp, 8
// 005949f2  e9a9eaffff           jmp 0x5934a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
