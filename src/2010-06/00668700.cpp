// roc 2010-06 00668700  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00668700
//
// 00668700  6890494a00           push 0x4a4990
// 00668705  68483ec000           push 0xc03e48
// 0066870a  e8818fd9ff           call 0x401690
// 0066870f  83c408               add esp, 8
// 00668712  e9b9b2e3ff           jmp 0x4a39d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
