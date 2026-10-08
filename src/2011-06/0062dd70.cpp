// roc 2011-06 0062dd70  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062dd70
//
// 0062dd70  68a0b84100           push 0x41b8a0
// 0062dd75  68d823cb00           push 0xcb23d8
// 0062dd7a  e89138ddff           call 0x401610
// 0062dd7f  83c408               add esp, 8
// 0062dd82  e949d9deff           jmp 0x41b6d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
