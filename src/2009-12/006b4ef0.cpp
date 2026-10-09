// roc 2009-12 006b4ef0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4ef0
//
// 006b4ef0  6810364300           push 0x433610
// 006b4ef5  6870a3b700           push 0xb7a370
// 006b4efa  e831c7d4ff           call 0x401630
// 006b4eff  83c408               add esp, 8
// 006b4f02  e909e0d7ff           jmp 0x432f10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
