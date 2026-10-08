// roc 2009-06 0067ba90  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ba90
//
// 0067ba90  68d0b26700           push 0x67b2d0
// 0067ba95  68f4e3a400           push 0xa4e3f4
// 0067ba9a  e8715cd8ff           call 0x401710
// 0067ba9f  83c408               add esp, 8
// 0067baa2  e9a9f6ffff           jmp 0x67b150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
