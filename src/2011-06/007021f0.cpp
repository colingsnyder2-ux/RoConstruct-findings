// roc 2011-06 007021f0  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007021f0
//
// 007021f0  68e0135c00           push 0x5c13e0
// 007021f5  6804e6cb00           push 0xcbe604
// 007021fa  e811f4cfff           call 0x401610
// 007021ff  83c408               add esp, 8
// 00702202  e9a9dfebff           jmp 0x5c01b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
