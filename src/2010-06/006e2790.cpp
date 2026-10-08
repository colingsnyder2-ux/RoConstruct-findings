// roc 2010-06 006e2790  unit: RBX::VTextBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e2790
//
// 006e2790  6840c65a00           push 0x5ac640
// 006e2795  6850c2c000           push 0xc0c250
// 006e279a  e8f1eed1ff           call 0x401690
// 006e279f  83c408               add esp, 8
// 006e27a2  e9e994ecff           jmp 0x5abc90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
