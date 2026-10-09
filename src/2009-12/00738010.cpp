// roc 2009-12 00738010  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738010
//
// 00738010  68a0996400           push 0x6499a0
// 00738015  68fc5fb800           push 0xb85ffc
// 0073801a  e81196ccff           call 0x401630
// 0073801f  83c408               add esp, 8
// 00738022  e91907f1ff           jmp 0x648740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
