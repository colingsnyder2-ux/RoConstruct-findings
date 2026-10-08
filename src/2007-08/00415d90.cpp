// roc 2007-08 00415d90  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415d90
//
// 00415d90  681cb28b00           push 0x8bb21c
// 00415d95  6820424100           push 0x414220
// 00415d9a  e881f73000           call 0x725520
// 00415d9f  83c408               add esp, 8
// 00415da2  e949dcffff           jmp 0x4139f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
