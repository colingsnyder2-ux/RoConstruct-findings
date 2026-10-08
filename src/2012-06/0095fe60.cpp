// roc 2012-06 0095fe60  unit: RBX::HUMAN::Ragdoll  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095fe60
//
// 0095fe60  6850fe9500           push 0x95fe50
// 0095fe65  681071e500           push 0xe57110
// 0095fe6a  e83117aaff           call 0x4015a0
// 0095fe6f  83c408               add esp, 8
// 0095fe72  e9f9feffff           jmp 0x95fd70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
