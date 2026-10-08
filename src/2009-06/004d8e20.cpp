// roc 2009-06 004d8e20  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d8e20
//
// 004d8e20  68804a4c00           push 0x4c4a80
// 004d8e25  6878dba300           push 0xa3db78
// 004d8e2a  e8e188f2ff           call 0x401710
// 004d8e2f  83c408               add esp, 8
// 004d8e32  e9b9b4feff           jmp 0x4c42f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
