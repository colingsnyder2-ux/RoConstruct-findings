// roc 2009-06 0067bab0  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bab0
//
// 0067bab0  6800424e00           push 0x4e4200
// 0067bab5  68acf2a300           push 0xa3f2ac
// 0067baba  e8515cd8ff           call 0x401710
// 0067babf  83c408               add esp, 8
// 0067bac2  e99978e6ff           jmp 0x4e3360
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
