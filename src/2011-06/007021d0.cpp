// roc 2011-06 007021d0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007021d0
//
// 007021d0  68d0135c00           push 0x5c13d0
// 007021d5  6800e6cb00           push 0xcbe600
// 007021da  e831f4cfff           call 0x401610
// 007021df  83c408               add esp, 8
// 007021e2  e959dfebff           jmp 0x5c0140
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
