// roc 2009-12 007380b0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007380b0
//
// 007380b0  68f0996400           push 0x6499f0
// 007380b5  681060b800           push 0xb86010
// 007380ba  e87195ccff           call 0x401630
// 007380bf  83c408               add esp, 8
// 007380c2  e9a908f1ff           jmp 0x648970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
