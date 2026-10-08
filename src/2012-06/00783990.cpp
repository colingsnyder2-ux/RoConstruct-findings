// roc 2012-06 00783990  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783990
//
// 00783990  68e0c36700           push 0x67c3e0
// 00783995  68d494e200           push 0xe294d4
// 0078399a  e801dcc7ff           call 0x4015a0
// 0078399f  83c408               add esp, 8
// 007839a2  e9d989efff           jmp 0x67c380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
