// roc 2007-08 005e5fd0  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5fd0
//
// 005e5fd0  68084e8c00           push 0x8c4e08
// 005e5fd5  68f03d5900           push 0x593df0
// 005e5fda  e841f51300           call 0x725520
// 005e5fdf  83c408               add esp, 8
// 005e5fe2  e9d9dafaff           jmp 0x593ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
