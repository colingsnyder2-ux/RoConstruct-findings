// roc 2009-06 006f3fc0  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f3fc0
//
// 006f3fc0  68b03f6f00           push 0x6f3fb0
// 006f3fc5  680002a500           push 0xa50200
// 006f3fca  e841d7d0ff           call 0x401710
// 006f3fcf  83c408               add esp, 8
// 006f3fd2  e969ffffff           jmp 0x6f3f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
