// roc 2009-06 006f3c80  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3c80
//
// 006f3c80  68603c6f00           push 0x6f3c60
// 006f3c85  68b401a500           push 0xa501b4
// 006f3c8a  e881dad0ff           call 0x401710
// 006f3c8f  83c408               add esp, 8
// 006f3c92  e959feffff           jmp 0x6f3af0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
