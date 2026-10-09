// roc 2009-12 007380d0  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007380d0
//
// 007380d0  68009a6400           push 0x649a00
// 007380d5  681460b800           push 0xb86014
// 007380da  e85195ccff           call 0x401630
// 007380df  83c408               add esp, 8
// 007380e2  e9f908f1ff           jmp 0x6489e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
