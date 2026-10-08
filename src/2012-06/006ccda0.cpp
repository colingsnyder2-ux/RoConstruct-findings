// roc 2012-06 006ccda0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ccda0
//
// 006ccda0  68d0c16c00           push 0x6cc1d0
// 006ccda5  68b8e8e200           push 0xe2e8b8
// 006ccdaa  e8f147d3ff           call 0x4015a0
// 006ccdaf  83c408               add esp, 8
// 006ccdb2  e939f1ffff           jmp 0x6cbef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
