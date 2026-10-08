// roc 2012-06 0095f940  unit: RBX::HUMAN::PlatformStanding  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095f940
//
// 0095f940  6810f99500           push 0x95f910
// 0095f945  68c870e500           push 0xe570c8
// 0095f94a  e8511caaff           call 0x4015a0
// 0095f94f  83c408               add esp, 8
// 0095f952  e949feffff           jmp 0x95f7a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
