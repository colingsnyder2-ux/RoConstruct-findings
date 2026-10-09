// roc 2009-12 0068f1a0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068f1a0
//
// 0068f1a0  68d0774100           push 0x4177d0
// 0068f1a5  68c0a1b700           push 0xb7a1c0
// 0068f1aa  e88124d7ff           call 0x401630
// 0068f1af  83c408               add esp, 8
// 0068f1b2  e94984d8ff           jmp 0x417600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
