// roc 2011-06 006f8270  unit: RBX::VCookiesService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f8270
//
// 006f8270  6800135c00           push 0x5c1300
// 006f8275  68cce5cb00           push 0xcbe5cc
// 006f827a  e89193d0ff           call 0x401610
// 006f827f  83c408               add esp, 8
// 006f8282  e90979ecff           jmp 0x5bfb90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
