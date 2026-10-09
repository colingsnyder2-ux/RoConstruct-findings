// roc 2009-12 006e2a60  unit: RBX::VSmoke::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e2a60
//
// 006e2a60  6890b44800           push 0x48b490
// 006e2a65  68d8ccb700           push 0xb7ccd8
// 006e2a6a  e8c1ebd1ff           call 0x401630
// 006e2a6f  83c408               add esp, 8
// 006e2a72  e98989daff           jmp 0x48b400
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
