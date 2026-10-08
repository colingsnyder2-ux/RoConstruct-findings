// roc 2011-06 007ec790  unit: RBX::HUMAN::StrafingNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec790
//
// 007ec790  6880c77e00           push 0x7ec780
// 007ec795  68c85fcd00           push 0xcd5fc8
// 007ec79a  e8714ec1ff           call 0x401610
// 007ec79f  83c408               add esp, 8
// 007ec7a2  e929ffffff           jmp 0x7ec6d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
