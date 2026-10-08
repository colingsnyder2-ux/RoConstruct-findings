// roc 2010-06 004d6bf0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d6bf0
//
// 004d6bf0  6800494a00           push 0x4a4900
// 004d6bf5  68243ec000           push 0xc03e24
// 004d6bfa  e891aaf2ff           call 0x401690
// 004d6bff  83c408               add esp, 8
// 004d6c02  e9d9c9fcff           jmp 0x4a35e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
