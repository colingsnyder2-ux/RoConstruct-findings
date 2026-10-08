// roc 2011-06 007050f0  unit: RBX::VHandles::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007050f0
//
// 007050f0  6820145c00           push 0x5c1420
// 007050f5  6814e6cb00           push 0xcbe614
// 007050fa  e811c5cfff           call 0x401610
// 007050ff  83c408               add esp, 8
// 00705102  e969b2ebff           jmp 0x5c0370
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
