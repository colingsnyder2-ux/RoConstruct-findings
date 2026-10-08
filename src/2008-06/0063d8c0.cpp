// roc 2008-06 0063d8c0  unit: RBX::VSparkles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063d8c0
//
// 0063d8c0  6834789700           push 0x977834
// 0063d8c5  6870005c00           push 0x5c0070
// 0063d8ca  e8619af1ff           call 0x557330
// 0063d8cf  83c408               add esp, 8
// 0063d8d2  e92926f8ff           jmp 0x5bff00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
