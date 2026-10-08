// roc 2008-06 0048c480  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c480
//
// 0048c480  6810c39600           push 0x96c310
// 0048c485  68b06e4000           push 0x406eb0
// 0048c48a  e8a1ae0c00           call 0x557330
// 0048c48f  83c408               add esp, 8
// 0048c492  e9b9a3f7ff           jmp 0x406850
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
