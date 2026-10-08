// roc 2010-06 00647430  unit: RBX::StudsTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647430
//
// 00647430  6830676400           push 0x646730
// 00647435  6870b8c100           push 0xc1b870
// 0064743a  e851a2dbff           call 0x401690
// 0064743f  83c408               add esp, 8
// 00647442  e9d9e8ffff           jmp 0x645d20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
