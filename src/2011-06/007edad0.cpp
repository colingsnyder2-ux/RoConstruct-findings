// roc 2011-06 007edad0  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007edad0
//
// 007edad0  6880da7e00           push 0x7eda80
// 007edad5  684060cd00           push 0xcd6040
// 007edada  e8313bc1ff           call 0x401610
// 007edadf  83c408               add esp, 8
// 007edae2  e929ffffff           jmp 0x7eda10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
