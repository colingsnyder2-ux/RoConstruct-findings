// roc 2010-06 004daa00  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004daa00
//
// 004daa00  68d00e4c00           push 0x4c0ed0
// 004daa05  68c849c000           push 0xc049c8
// 004daa0a  e8816cf2ff           call 0x401690
// 004daa0f  83c408               add esp, 8
// 004daa12  e97956feff           jmp 0x4c0090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
