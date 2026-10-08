// roc 2009-06 004d6b80  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d6b80
//
// 004d6b80  68904a4c00           push 0x4c4a90
// 004d6b85  687cdba300           push 0xa3db7c
// 004d6b8a  e881abf2ff           call 0x401710
// 004d6b8f  83c408               add esp, 8
// 004d6b92  e9c9d7feff           jmp 0x4c4360
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
