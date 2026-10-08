// roc 2007-08 005dae70  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dae70
//
// 005dae70  68946a8c00           push 0x8c6a94
// 005dae75  68a0a55d00           push 0x5da5a0
// 005dae7a  e8a1a61400           call 0x725520
// 005dae7f  83c408               add esp, 8
// 005dae82  e909f1ffff           jmp 0x5d9f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
