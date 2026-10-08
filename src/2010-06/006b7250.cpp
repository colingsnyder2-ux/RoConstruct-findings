// roc 2010-06 006b7250  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b7250
//
// 006b7250  6890c45a00           push 0x5ac490
// 006b7255  68e4c1c000           push 0xc0c1e4
// 006b725a  e831a4d4ff           call 0x401690
// 006b725f  83c408               add esp, 8
// 006b7262  e9593eefff           jmp 0x5ab0c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
