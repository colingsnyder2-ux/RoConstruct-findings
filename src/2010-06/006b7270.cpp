// roc 2010-06 006b7270  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b7270
//
// 006b7270  68a0c45a00           push 0x5ac4a0
// 006b7275  68e8c1c000           push 0xc0c1e8
// 006b727a  e811a4d4ff           call 0x401690
// 006b727f  83c408               add esp, 8
// 006b7282  e9a93eefff           jmp 0x5ab130
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
