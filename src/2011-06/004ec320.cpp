// roc 2011-06 004ec320  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ec320
//
// 004ec320  6870874c00           push 0x4c8770
// 004ec325  681065cb00           push 0xcb6510
// 004ec32a  e8e152f1ff           call 0x401610
// 004ec32f  83c408               add esp, 8
// 004ec332  e979affdff           jmp 0x4c72b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
