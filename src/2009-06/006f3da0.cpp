// roc 2009-06 006f3da0  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3da0
//
// 006f3da0  68903d6f00           push 0x6f3d90
// 006f3da5  68d001a500           push 0xa501d0
// 006f3daa  e861d9d0ff           call 0x401710
// 006f3daf  83c408               add esp, 8
// 006f3db2  e909ffffff           jmp 0x6f3cc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
