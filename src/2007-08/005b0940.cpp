// roc 2007-08 005b0940  unit: RBX::VMotor::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0940
//
// 005b0940  6878e98b00           push 0x8be978
// 005b0945  68b0714a00           push 0x4a71b0
// 005b094a  e8d14b1700           call 0x725520
// 005b094f  83c408               add esp, 8
// 005b0952  e99951efff           jmp 0x4a5af0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
