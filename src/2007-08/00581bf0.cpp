// roc 2007-08 00581bf0  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581bf0
//
// 00581bf0  6828b98b00           push 0x8bb928
// 00581bf5  68b00d4300           push 0x430db0
// 00581bfa  e821391a00           call 0x725520
// 00581bff  83c408               add esp, 8
// 00581c02  e9f9d9eaff           jmp 0x42f600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
