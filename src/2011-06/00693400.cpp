// roc 2011-06 00693400  unit: RBX::VCharacterAppearance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00693400
//
// 00693400  6890306900           push 0x693090
// 00693405  680cf7cc00           push 0xccf70c
// 0069340a  e801e2d6ff           call 0x401610
// 0069340f  83c408               add esp, 8
// 00693412  e9e9faffff           jmp 0x692f00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
