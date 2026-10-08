// roc 2010-06 004c36a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c36a0
//
// 004c36a0  6810fe4000           push 0x40fe10
// 004c36a5  686c06c000           push 0xc0066c
// 004c36aa  e8e1dff3ff           call 0x401690
// 004c36af  83c408               add esp, 8
// 004c36b2  e9a9c2f4ff           jmp 0x40f960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
