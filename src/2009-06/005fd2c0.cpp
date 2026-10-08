// roc 2009-06 005fd2c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fd2c0
//
// 005fd2c0  68502a4e00           push 0x4e2a50
// 005fd2c5  6850f1a300           push 0xa3f150
// 005fd2ca  e84144e0ff           call 0x401710
// 005fd2cf  83c408               add esp, 8
// 005fd2d2  e95956eeff           jmp 0x4e2930
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
