// roc 2009-12 006c7590  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c7590
//
// 006c7590  6820cd4400           push 0x44cd20
// 006c7595  6894b4b700           push 0xb7b494
// 006c759a  e891a0d3ff           call 0x401630
// 006c759f  83c408               add esp, 8
// 006c75a2  e96947d8ff           jmp 0x44bd10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
