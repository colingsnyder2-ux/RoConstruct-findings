// roc 2009-12 006c65b0  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c65b0
//
// 006c65b0  6810cd4400           push 0x44cd10
// 006c65b5  6890b4b700           push 0xb7b490
// 006c65ba  e871b0d3ff           call 0x401630
// 006c65bf  83c408               add esp, 8
// 006c65c2  e9d956d8ff           jmp 0x44bca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
