// roc 2009-12 0075c560  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075c560
//
// 0075c560  6850c57500           push 0x75c550
// 0075c565  680878b900           push 0xb97808
// 0075c56a  e8c150caff           call 0x401630
// 0075c56f  83c408               add esp, 8
// 0075c572  e969ffffff           jmp 0x75c4e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
