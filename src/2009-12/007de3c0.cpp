// roc 2009-12 007de3c0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007de3c0
//
// 007de3c0  6850e27d00           push 0x7de250
// 007de3c5  684490b900           push 0xb99044
// 007de3ca  e86132c2ff           call 0x401630
// 007de3cf  83c408               add esp, 8
// 007de3d2  e919faffff           jmp 0x7dddf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
