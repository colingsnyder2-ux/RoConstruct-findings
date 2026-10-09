// roc 2009-12 006d5b10  unit: RBX::LeftMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5b10
//
// 006d5b10  6880496d00           push 0x6d4980
// 006d5b15  68342db900           push 0xb92d34
// 006d5b1a  e811bbd2ff           call 0x401630
// 006d5b1f  83c408               add esp, 8
// 006d5b22  e929e6ffff           jmp 0x6d4150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
