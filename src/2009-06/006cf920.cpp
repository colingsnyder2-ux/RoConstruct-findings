// roc 2009-06 006cf920  unit: RBX::HUMAN::Climbing  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cf920
//
// 006cf920  6810f96c00           push 0x6cf910
// 006cf925  6880fea400           push 0xa4fe80
// 006cf92a  e8e11dd3ff           call 0x401710
// 006cf92f  83c408               add esp, 8
// 006cf932  e969ffffff           jmp 0x6cf8a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
