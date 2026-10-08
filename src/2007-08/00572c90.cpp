// roc 2007-08 00572c90  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572c90
//
// 00572c90  6880b48b00           push 0x8bb480
// 00572c95  6810c14100           push 0x41c110
// 00572c9a  e881281b00           call 0x725520
// 00572c9f  83c408               add esp, 8
// 00572ca2  e92992eaff           jmp 0x41bed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
