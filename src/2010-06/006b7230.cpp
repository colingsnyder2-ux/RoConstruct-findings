// roc 2010-06 006b7230  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b7230
//
// 006b7230  6880c45a00           push 0x5ac480
// 006b7235  68e0c1c000           push 0xc0c1e0
// 006b723a  e851a4d4ff           call 0x401690
// 006b723f  83c408               add esp, 8
// 006b7242  e9093eefff           jmp 0x5ab050
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
