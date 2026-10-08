// roc 2009-06 00673530  unit: RBX::VCharacterAppearance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673530
//
// 00673530  68e0336700           push 0x6733e0
// 00673535  68c0dda400           push 0xa4ddc0
// 0067353a  e8d1e1d8ff           call 0x401710
// 0067353f  83c408               add esp, 8
// 00673542  e929fdffff           jmp 0x673270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
