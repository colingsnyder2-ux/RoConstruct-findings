// roc 2008-06 00630780  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00630780
//
// 00630780  680c789700           push 0x97780c
// 00630785  68d0ff5b00           push 0x5bffd0
// 0063078a  e8a16bf2ff           call 0x557330
// 0063078f  83c408               add esp, 8
// 00630792  e909f3f8ff           jmp 0x5bfaa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
