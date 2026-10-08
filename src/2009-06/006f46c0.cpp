// roc 2009-06 006f46c0  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f46c0
//
// 006f46c0  68d0436f00           push 0x6f43d0
// 006f46c5  683002a500           push 0xa50230
// 006f46ca  e841d0d0ff           call 0x401710
// 006f46cf  83c408               add esp, 8
// 006f46d2  e9c9fbffff           jmp 0x6f42a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
