// roc 2009-06 005f37c0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f37c0
//
// 005f37c0  6810a25e00           push 0x5ea210
// 005f37c5  68d049a400           push 0xa449d0
// 005f37ca  e841dfe0ff           call 0x401710
// 005f37cf  83c408               add esp, 8
// 005f37d2  e93963ffff           jmp 0x5e9b10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
