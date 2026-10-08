// roc 2012-06 007f4990  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f4990
//
// 007f4990  6880497f00           push 0x7f4980
// 007f4995  68b0eae400           push 0xe4eab0
// 007f499a  e801ccc0ff           call 0x4015a0
// 007f499f  83c408               add esp, 8
// 007f49a2  e969ffffff           jmp 0x7f4910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
