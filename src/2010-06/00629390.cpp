// roc 2010-06 00629390  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00629390
//
// 00629390  68704a4300           push 0x434a70
// 00629395  683809c000           push 0xc00938
// 0062939a  e8f182ddff           call 0x401690
// 0062939f  83c408               add esp, 8
// 006293a2  e9f9b0e0ff           jmp 0x4344a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
