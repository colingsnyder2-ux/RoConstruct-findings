// roc 2012-06 0095ff30  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095ff30
//
// 0095ff30  68f0fe9500           push 0x95fef0
// 0095ff35  682871e500           push 0xe57128
// 0095ff3a  e86116aaff           call 0x4015a0
// 0095ff3f  83c408               add esp, 8
// 0095ff42  e939ffffff           jmp 0x95fe80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
