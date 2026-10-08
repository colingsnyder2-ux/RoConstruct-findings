// roc 2010-06 00791980  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00791980
//
// 00791980  6810187900           push 0x791810
// 00791985  680c37c200           push 0xc2370c
// 0079198a  e801fdc6ff           call 0x401690
// 0079198f  83c408               add esp, 8
// 00791992  e919faffff           jmp 0x7913b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
