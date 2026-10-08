// roc 2012-06 0095fb50  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095fb50
//
// 0095fb50  6840fb9500           push 0x95fb40
// 0095fb55  68e070e500           push 0xe570e0
// 0095fb5a  e8411aaaff           call 0x4015a0
// 0095fb5f  83c408               add esp, 8
// 0095fb62  e939ffffff           jmp 0x95faa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
