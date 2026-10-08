// roc 2007-08 005b0840  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0840
//
// 005b0840  6870e98b00           push 0x8be970
// 005b0845  6890714a00           push 0x4a7190
// 005b084a  e8d14c1700           call 0x725520
// 005b084f  83c408               add esp, 8
// 005b0852  e99951efff           jmp 0x4a59f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
