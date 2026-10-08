// roc 2010-06 00695fa0  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00695fa0
//
// 00695fa0  68b06d4e00           push 0x4e6db0
// 00695fa5  686c66c000           push 0xc0666c
// 00695faa  e8e1b6d6ff           call 0x401690
// 00695faf  83c408               add esp, 8
// 00695fb2  e969fbe4ff           jmp 0x4e5b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
