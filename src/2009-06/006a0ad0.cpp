// roc 2009-06 006a0ad0  unit: RBX::VSparkles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a0ad0
//
// 006a0ad0  6820a25e00           push 0x5ea220
// 006a0ad5  68d449a400           push 0xa449d4
// 006a0ada  e8310cd6ff           call 0x401710
// 006a0adf  83c408               add esp, 8
// 006a0ae2  e99990f4ff           jmp 0x5e9b80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
