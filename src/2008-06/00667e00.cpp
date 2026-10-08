// roc 2008-06 00667e00  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667e00
//
// 00667e00  68fcd99700           push 0x97d9fc
// 00667e05  68f07d6600           push 0x667df0
// 00667e0a  e821f5eeff           call 0x557330
// 00667e0f  83c408               add esp, 8
// 00667e12  e969ffffff           jmp 0x667d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
