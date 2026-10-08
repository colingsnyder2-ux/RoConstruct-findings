// roc 2007-08 005b5fc0  unit: RBX::VSky::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5fc0
//
// 005b5fc0  68d8f98b00           push 0x8bf9d8
// 005b5fc5  6860d74c00           push 0x4cd760
// 005b5fca  e851f51600           call 0x725520
// 005b5fcf  83c408               add esp, 8
// 005b5fd2  e92976f1ff           jmp 0x4cd600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
