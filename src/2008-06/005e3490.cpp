// roc 2008-06 005e3490  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3490
//
// 005e3490  688c149700           push 0x97148c
// 005e3495  6880c34a00           push 0x4ac380
// 005e349a  e8913ef7ff           call 0x557330
// 005e349f  83c408               add esp, 8
// 005e34a2  e9597fecff           jmp 0x4ab400
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
