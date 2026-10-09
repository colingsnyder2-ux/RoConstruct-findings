// roc 2009-12 00658400  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00658400
//
// 00658400  68c02d4c00           push 0x4c2dc0
// 00658405  6894cfb700           push 0xb7cf94
// 0065840a  e82192daff           call 0x401630
// 0065840f  83c408               add esp, 8
// 00658412  e9f99de6ff           jmp 0x4c2210
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
