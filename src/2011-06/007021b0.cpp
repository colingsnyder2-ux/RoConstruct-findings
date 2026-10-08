// roc 2011-06 007021b0  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007021b0
//
// 007021b0  68c0135c00           push 0x5c13c0
// 007021b5  68fce5cb00           push 0xcbe5fc
// 007021ba  e851f4cfff           call 0x401610
// 007021bf  83c408               add esp, 8
// 007021c2  e909dfebff           jmp 0x5c00d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
