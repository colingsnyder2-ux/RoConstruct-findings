// roc 2009-12 00738090  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738090
//
// 00738090  68e0996400           push 0x6499e0
// 00738095  680c60b800           push 0xb8600c
// 0073809a  e89195ccff           call 0x401630
// 0073809f  83c408               add esp, 8
// 007380a2  e95908f1ff           jmp 0x648900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
