// roc 2011-06 0072a940  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072a940
//
// 0072a940  68b0a37200           push 0x72a3b0
// 0072a945  686444cd00           push 0xcd4464
// 0072a94a  e8c16ccdff           call 0x401610
// 0072a94f  83c408               add esp, 8
// 0072a952  e9f9f7ffff           jmp 0x72a150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
