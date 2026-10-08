// roc 2011-06 00702250  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00702250
//
// 00702250  6810145c00           push 0x5c1410
// 00702255  6810e6cb00           push 0xcbe610
// 0070225a  e8b1f3cfff           call 0x401610
// 0070225f  83c408               add esp, 8
// 00702262  e999e0ebff           jmp 0x5c0300
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
