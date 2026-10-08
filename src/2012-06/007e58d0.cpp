// roc 2012-06 007e58d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e58d0
//
// 007e58d0  6800587e00           push 0x7e5800
// 007e58d5  68f0e8e400           push 0xe4e8f0
// 007e58da  e8c1bcc1ff           call 0x4015a0
// 007e58df  83c408               add esp, 8
// 007e58e2  e9a9feffff           jmp 0x7e5790
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
