// roc 2009-12 007d8bf0  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8bf0
//
// 007d8bf0  68a08b7d00           push 0x7d8ba0
// 007d8bf5  68648fb900           push 0xb98f64
// 007d8bfa  e8318ac2ff           call 0x401630
// 007d8bff  83c408               add esp, 8
// 007d8c02  e929ffffff           jmp 0x7d8b30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
