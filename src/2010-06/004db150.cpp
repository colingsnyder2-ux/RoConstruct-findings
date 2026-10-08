// roc 2010-06 004db150  unit: RBX::VMessage::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004db150
//
// 004db150  68a0a34d00           push 0x4da3a0
// 004db155  680062c000           push 0xc06200
// 004db15a  e83165f2ff           call 0x401690
// 004db15f  83c408               add esp, 8
// 004db162  e999eeffff           jmp 0x4da000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
