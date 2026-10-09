// roc 2009-12 007d7f70  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7f70
//
// 007d7f70  68607f7d00           push 0x7d7f60
// 007d7f75  68048fb900           push 0xb98f04
// 007d7f7a  e8b196c2ff           call 0x401630
// 007d7f7f  83c408               add esp, 8
// 007d7f82  e969ffffff           jmp 0x7d7ef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
