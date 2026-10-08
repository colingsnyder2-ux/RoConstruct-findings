// roc 2012-06 00889d20  unit: RBX::VRelativePanel::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00889d20
//
// 00889d20  68109d8800           push 0x889d10
// 00889d25  680825e500           push 0xe52508
// 00889d2a  e87178b7ff           call 0x4015a0
// 00889d2f  83c408               add esp, 8
// 00889d32  e969ffffff           jmp 0x889ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
