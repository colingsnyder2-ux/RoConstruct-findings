// roc 2010-06 00785050  unit: RBX::HUMAN::PlatformStanding  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785050
//
// 00785050  6820507800           push 0x785020
// 00785055  688435c200           push 0xc23584
// 0078505a  e831c6c7ff           call 0x401690
// 0078505f  83c408               add esp, 8
// 00785062  e979feffff           jmp 0x784ee0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
