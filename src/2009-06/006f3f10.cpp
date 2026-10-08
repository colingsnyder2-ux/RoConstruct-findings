// roc 2009-06 006f3f10  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3f10
//
// 006f3f10  68003f6f00           push 0x6f3f00
// 006f3f15  68e801a500           push 0xa501e8
// 006f3f1a  e8f1d7d0ff           call 0x401710
// 006f3f1f  83c408               add esp, 8
// 006f3f22  e939ffffff           jmp 0x6f3e60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
