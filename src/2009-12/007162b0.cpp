// roc 2009-12 007162b0  unit: RBX::VRotateP::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007162b0
//
// 007162b0  68f0885300           push 0x5388f0
// 007162b5  68dc05b800           push 0xb805dc
// 007162ba  e871b3ceff           call 0x401630
// 007162bf  83c408               add esp, 8
// 007162c2  e99916e2ff           jmp 0x537960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
