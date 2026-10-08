// roc 2011-06 0071b260  unit: RBX::VSelectionPartLasso::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071b260
//
// 0071b260  6840155c00           push 0x5c1540
// 0071b265  685ce6cb00           push 0xcbe65c
// 0071b26a  e8a163ceff           call 0x401610
// 0071b26f  83c408               add esp, 8
// 0071b272  e9d958eaff           jmp 0x5c0b50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
