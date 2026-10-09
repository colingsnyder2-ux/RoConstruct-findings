// roc 2009-12 006bb680  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bb680
//
// 006bb680  6820364300           push 0x433620
// 006bb685  6874a3b700           push 0xb7a374
// 006bb68a  e8a15fd4ff           call 0x401630
// 006bb68f  83c408               add esp, 8
// 006bb692  e9e978d7ff           jmp 0x432f80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
