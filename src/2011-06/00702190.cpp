// roc 2011-06 00702190  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00702190
//
// 00702190  68b0135c00           push 0x5c13b0
// 00702195  68f8e5cb00           push 0xcbe5f8
// 0070219a  e871f4cfff           call 0x401610
// 0070219f  83c408               add esp, 8
// 007021a2  e9b9deebff           jmp 0x5c0060
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
