// roc 2009-06 006f48d0  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f48d0
//
// 006f48d0  6850476f00           push 0x6f4750
// 006f48d5  684802a500           push 0xa50248
// 006f48da  e831ced0ff           call 0x401710
// 006f48df  83c408               add esp, 8
// 006f48e2  e9f9fdffff           jmp 0x6f46e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
