// roc 2011-06 00702230  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00702230
//
// 00702230  6800145c00           push 0x5c1400
// 00702235  680ce6cb00           push 0xcbe60c
// 0070223a  e8d1f3cfff           call 0x401610
// 0070223f  83c408               add esp, 8
// 00702242  e949e0ebff           jmp 0x5c0290
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
