// roc 2011-06 006b3910  unit: RBX::VInsertService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b3910
//
// 006b3910  6890874c00           push 0x4c8790
// 006b3915  681865cb00           push 0xcb6518
// 006b391a  e8f1dcd4ff           call 0x401610
// 006b391f  83c408               add esp, 8
// 006b3922  e9693ae1ff           jmp 0x4c7390
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
