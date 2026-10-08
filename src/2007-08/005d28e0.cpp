// roc 2007-08 005d28e0  unit: RBX::ScriptMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d28e0
//
// 005d28e0  6860688c00           push 0x8c6860
// 005d28e5  68a01e5d00           push 0x5d1ea0
// 005d28ea  e8312c1500           call 0x725520
// 005d28ef  83c408               add esp, 8
// 005d28f2  e989f4ffff           jmp 0x5d1d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
