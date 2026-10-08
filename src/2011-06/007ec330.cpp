// roc 2011-06 007ec330  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec330
//
// 007ec330  6810c37e00           push 0x7ec310
// 007ec335  68885fcd00           push 0xcd5f88
// 007ec33a  e8d152c1ff           call 0x401610
// 007ec33f  83c408               add esp, 8
// 007ec342  e979feffff           jmp 0x7ec1c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
