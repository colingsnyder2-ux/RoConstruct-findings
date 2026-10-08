// roc 2012-06 00869c80  unit: RBX::VRelativePanel::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00869c80
//
// 00869c80  68501f6d00           push 0x6d1f50
// 00869c85  6838f9e200           push 0xe2f938
// 00869c8a  e81179b9ff           call 0x4015a0
// 00869c8f  83c408               add esp, 8
// 00869c92  e92966e6ff           jmp 0x6d02c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
