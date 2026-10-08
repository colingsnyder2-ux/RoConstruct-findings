// roc 2010-06 00698680  unit: RBX::JointsService  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00698680
//
// 00698680  68306e4e00           push 0x4e6e30
// 00698685  688c66c000           push 0xc0668c
// 0069868a  e80190d6ff           call 0x401690
// 0069868f  83c408               add esp, 8
// 00698692  e909d8e4ff           jmp 0x4e5ea0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
