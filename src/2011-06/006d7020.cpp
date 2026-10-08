// roc 2011-06 006d7020  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d7020
//
// 006d7020  6890574f00           push 0x4f5790
// 006d7025  682083cb00           push 0xcb8320
// 006d702a  e8e1a5d2ff           call 0x401610
// 006d702f  83c408               add esp, 8
// 006d7032  e969d8e1ff           jmp 0x4f48a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
