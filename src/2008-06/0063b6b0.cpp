// roc 2008-06 0063b6b0  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b6b0
//
// 0063b6b0  682c789700           push 0x97782c
// 0063b6b5  6850005c00           push 0x5c0050
// 0063b6ba  e871bcf1ff           call 0x557330
// 0063b6bf  83c408               add esp, 8
// 0063b6c2  e95947f8ff           jmp 0x5bfe20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
