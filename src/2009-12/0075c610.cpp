// roc 2009-12 0075c610  unit: RBX::VSelectionPartLasso::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075c610
//
// 0075c610  68409b6400           push 0x649b40
// 0075c615  686460b800           push 0xb86064
// 0075c61a  e81150caff           call 0x401630
// 0075c61f  83c408               add esp, 8
// 0075c622  e979cceeff           jmp 0x6492a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
