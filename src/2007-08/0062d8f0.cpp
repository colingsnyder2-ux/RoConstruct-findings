// roc 2007-08 0062d8f0  unit: RBX::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062d8f0
//
// 0062d8f0  6814838c00           push 0x8c8314
// 0062d8f5  68a0d86200           push 0x62d8a0
// 0062d8fa  e8217c0f00           call 0x725520
// 0062d8ff  83c408               add esp, 8
// 0062d902  e929ffffff           jmp 0x62d830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
