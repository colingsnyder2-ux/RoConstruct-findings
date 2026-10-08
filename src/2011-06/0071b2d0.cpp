// roc 2011-06 0071b2d0  unit: RBX::VSelectionPointLasso::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071b2d0
//
// 0071b2d0  6850155c00           push 0x5c1550
// 0071b2d5  6860e6cb00           push 0xcbe660
// 0071b2da  e83163ceff           call 0x401610
// 0071b2df  83c408               add esp, 8
// 0071b2e2  e9d958eaff           jmp 0x5c0bc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
