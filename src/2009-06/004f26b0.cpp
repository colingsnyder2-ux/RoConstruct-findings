// roc 2009-06 004f26b0  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f26b0
//
// 004f26b0  68a0264f00           push 0x4f26a0
// 004f26b5  68f8f2a300           push 0xa3f2f8
// 004f26ba  e851f0f0ff           call 0x401710
// 004f26bf  83c408               add esp, 8
// 004f26c2  e969ffffff           jmp 0x4f2630
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
