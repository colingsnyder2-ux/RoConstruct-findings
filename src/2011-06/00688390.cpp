// roc 2011-06 00688390  unit: RBX::VPose::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688390
//
// 00688390  6820c44900           push 0x49c420
// 00688395  680452cb00           push 0xcb5204
// 0068839a  e87192d7ff           call 0x401610
// 0068839f  83c408               add esp, 8
// 006883a2  e9993be1ff           jmp 0x49bf40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
