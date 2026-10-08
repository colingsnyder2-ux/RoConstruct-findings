// roc 2012-06 008b0b60  unit: RBX::VMouse::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b0b60
//
// 008b0b60  68f0088b00           push 0x8b08f0
// 008b0b65  681031e500           push 0xe53110
// 008b0b6a  e8310ab5ff           call 0x4015a0
// 008b0b6f  83c408               add esp, 8
// 008b0b72  e9d9fbffff           jmp 0x8b0750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
