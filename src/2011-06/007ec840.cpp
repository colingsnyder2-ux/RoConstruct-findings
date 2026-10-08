// roc 2011-06 007ec840  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec840
//
// 007ec840  6830c87e00           push 0x7ec830
// 007ec845  68e05fcd00           push 0xcd5fe0
// 007ec84a  e8c14dc1ff           call 0x401610
// 007ec84f  83c408               add esp, 8
// 007ec852  e969ffffff           jmp 0x7ec7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
