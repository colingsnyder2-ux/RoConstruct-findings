// roc 2012-06 0095f920  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095f920
//
// 0095f920  6800f99500           push 0x95f900
// 0095f925  68c470e500           push 0xe570c4
// 0095f92a  e8711caaff           call 0x4015a0
// 0095f92f  83c408               add esp, 8
// 0095f932  e9f9fdffff           jmp 0x95f730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
