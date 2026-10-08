// roc 2009-06 006f49b0  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f49b0
//
// 006f49b0  6860496f00           push 0x6f4960
// 006f49b5  686002a500           push 0xa50260
// 006f49ba  e851cdd0ff           call 0x401710
// 006f49bf  83c408               add esp, 8
// 006f49c2  e929ffffff           jmp 0x6f48f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
