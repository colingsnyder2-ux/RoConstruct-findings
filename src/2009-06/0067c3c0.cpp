// roc 2009-06 0067c3c0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067c3c0
//
// 0067c3c0  68b0c36700           push 0x67c3b0
// 0067c3c5  6800e4a400           push 0xa4e400
// 0067c3ca  e84153d8ff           call 0x401710
// 0067c3cf  83c408               add esp, 8
// 0067c3d2  e959ffffff           jmp 0x67c330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
