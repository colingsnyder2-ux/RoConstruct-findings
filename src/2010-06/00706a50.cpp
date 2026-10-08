// roc 2010-06 00706a50  unit: RBX::VRelativePanel::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00706a50
//
// 00706a50  68a0697000           push 0x7069a0
// 00706a55  68c427c200           push 0xc227c4
// 00706a5a  e831accfff           call 0x401690
// 00706a5f  83c408               add esp, 8
// 00706a62  e9b9feffff           jmp 0x706920
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
