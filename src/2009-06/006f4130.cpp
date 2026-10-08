// roc 2009-06 006f4130  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4130
//
// 006f4130  68f0406f00           push 0x6f40f0
// 006f4135  681802a500           push 0xa50218
// 006f413a  e8d1d5d0ff           call 0x401710
// 006f413f  83c408               add esp, 8
// 006f4142  e939ffffff           jmp 0x6f4080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
