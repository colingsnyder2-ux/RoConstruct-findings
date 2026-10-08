// roc 2010-06 00695fc0  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695fc0
//
// 00695fc0  68c06d4e00           push 0x4e6dc0
// 00695fc5  687066c000           push 0xc06670
// 00695fca  e8c1b6d6ff           call 0x401690
// 00695fcf  83c408               add esp, 8
// 00695fd2  e9b9fbe4ff           jmp 0x4e5b90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
