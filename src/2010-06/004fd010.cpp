// roc 2010-06 004fd010  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fd010
//
// 004fd010  6800d04f00           push 0x4fd000
// 004fd015  68c466c000           push 0xc066c4
// 004fd01a  e87146f0ff           call 0x401690
// 004fd01f  83c408               add esp, 8
// 004fd022  e969ffffff           jmp 0x4fcf90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
