// roc 2011-06 00689d10  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00689d10
//
// 00689d10  6840c44900           push 0x49c440
// 00689d15  680c52cb00           push 0xcb520c
// 00689d1a  e8f178d7ff           call 0x401610
// 00689d1f  83c408               add esp, 8
// 00689d22  e9f922e1ff           jmp 0x49c020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
