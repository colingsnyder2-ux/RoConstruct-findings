// roc 2009-06 006fbdc0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fbdc0
//
// 006fbdc0  6850bc6f00           push 0x6fbc50
// 006fbdc5  686803a500           push 0xa50368
// 006fbdca  e84159d0ff           call 0x401710
// 006fbdcf  83c408               add esp, 8
// 006fbdd2  e909faffff           jmp 0x6fb7e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
