// roc 2009-06 006f3400  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3400
//
// 006f3400  68c0336f00           push 0x6f33c0
// 006f3405  686801a500           push 0xa50168
// 006f340a  e801e3d0ff           call 0x401710
// 006f340f  83c408               add esp, 8
// 006f3412  e939ffffff           jmp 0x6f3350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
