// roc 2012-06 0095f640  unit: RBX::HUMAN::Swimming  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095f640
//
// 0095f640  6830ee9500           push 0x95ee30
// 0095f645  68a470e500           push 0xe570a4
// 0095f64a  e8511faaff           call 0x4015a0
// 0095f64f  83c408               add esp, 8
// 0095f652  e969f7ffff           jmp 0x95edc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
