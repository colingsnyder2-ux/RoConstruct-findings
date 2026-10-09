// roc 2009-12 007161f0  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007161f0
//
// 007161f0  68b0885300           push 0x5388b0
// 007161f5  68cc05b800           push 0xb805cc
// 007161fa  e831b4ceff           call 0x401630
// 007161ff  83c408               add esp, 8
// 00716202  e99915e2ff           jmp 0x5377a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
