// roc 2009-06 006f3ca0  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3ca0
//
// 006f3ca0  68703c6f00           push 0x6f3c70
// 006f3ca5  68b801a500           push 0xa501b8
// 006f3caa  e861dad0ff           call 0x401710
// 006f3caf  83c408               add esp, 8
// 006f3cb2  e9a9feffff           jmp 0x6f3b60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
