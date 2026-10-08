// roc 2011-06 007ed2c0  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ed2c0
//
// 007ed2c0  6860d27e00           push 0x7ed260
// 007ed2c5  682860cd00           push 0xcd6028
// 007ed2ca  e84143c1ff           call 0x401610
// 007ed2cf  83c408               add esp, 8
// 007ed2d2  e919ffffff           jmp 0x7ed1f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
