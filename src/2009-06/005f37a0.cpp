// roc 2009-06 005f37a0  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f37a0
//
// 005f37a0  68d0db4700           push 0x47dbd0
// 005f37a5  6824c6a300           push 0xa3c624
// 005f37aa  e861dfe0ff           call 0x401710
// 005f37af  83c408               add esp, 8
// 005f37b2  e9e99ee8ff           jmp 0x47d6a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
