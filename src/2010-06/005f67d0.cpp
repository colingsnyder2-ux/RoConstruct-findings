// roc 2010-06 005f67d0  unit: RBX::VHopperBin::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f67d0
//
// 005f67d0  6820764100           push 0x417620
// 005f67d5  684407c000           push 0xc00744
// 005f67da  e8b1aee0ff           call 0x401690
// 005f67df  83c408               add esp, 8
// 005f67e2  e9090ce2ff           jmp 0x4173f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
