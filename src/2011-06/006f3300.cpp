// roc 2011-06 006f3300  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f3300
//
// 006f3300  68b0125c00           push 0x5c12b0
// 006f3305  68b8e5cb00           push 0xcbe5b8
// 006f330a  e801e3d0ff           call 0x401610
// 006f330f  83c408               add esp, 8
// 006f3312  e949c6ecff           jmp 0x5bf960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
