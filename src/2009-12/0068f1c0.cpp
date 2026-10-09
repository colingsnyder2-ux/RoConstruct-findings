// roc 2009-12 0068f1c0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068f1c0
//
// 0068f1c0  68e0774100           push 0x4177e0
// 0068f1c5  68c4a1b700           push 0xb7a1c4
// 0068f1ca  e86124d7ff           call 0x401630
// 0068f1cf  83c408               add esp, 8
// 0068f1d2  e99984d8ff           jmp 0x417670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
