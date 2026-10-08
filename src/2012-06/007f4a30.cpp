// roc 2012-06 007f4a30  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f4a30
//
// 007f4a30  68204a7f00           push 0x7f4a20
// 007f4a35  68bceae400           push 0xe4eabc
// 007f4a3a  e861cbc0ff           call 0x4015a0
// 007f4a3f  83c408               add esp, 8
// 007f4a42  e969ffffff           jmp 0x7f49b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
