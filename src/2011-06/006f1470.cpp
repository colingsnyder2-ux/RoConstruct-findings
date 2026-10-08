// roc 2011-06 006f1470  unit: RBX::VCollectionService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f1470
//
// 006f1470  6880125c00           push 0x5c1280
// 006f1475  68ace5cb00           push 0xcbe5ac
// 006f147a  e89101d1ff           call 0x401610
// 006f147f  83c408               add esp, 8
// 006f1482  e989e3ecff           jmp 0x5bf810
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
