// roc 2009-06 004c6a40  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c6a40
//
// 004c6a40  6850fc4000           push 0x40fc50
// 004c6a45  6894a0a300           push 0xa3a094
// 004c6a4a  e8c1acf3ff           call 0x401710
// 004c6a4f  83c408               add esp, 8
// 004c6a52  e9698df4ff           jmp 0x40f7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
