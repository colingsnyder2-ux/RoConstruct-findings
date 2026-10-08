// roc 2011-06 0062ddb0  unit: RBX::VStarterGear::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062ddb0
//
// 0062ddb0  68c0b84100           push 0x41b8c0
// 0062ddb5  68e023cb00           push 0xcb23e0
// 0062ddba  e85138ddff           call 0x401610
// 0062ddbf  83c408               add esp, 8
// 0062ddc2  e9e9d9deff           jmp 0x41b7b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
