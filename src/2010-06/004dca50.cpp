// roc 2010-06 004dca50  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dca50
//
// 004dca50  68c00e4c00           push 0x4c0ec0
// 004dca55  68c449c000           push 0xc049c4
// 004dca5a  e8314cf2ff           call 0x401690
// 004dca5f  83c408               add esp, 8
// 004dca62  e9b935feff           jmp 0x4c0020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
