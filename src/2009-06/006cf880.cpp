// roc 2009-06 006cf880  unit: RBX::HUMAN::Landed  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cf880
//
// 006cf880  6870f86c00           push 0x6cf870
// 006cf885  6874fea400           push 0xa4fe74
// 006cf88a  e8811ed3ff           call 0x401710
// 006cf88f  83c408               add esp, 8
// 006cf892  e969ffffff           jmp 0x6cf800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
