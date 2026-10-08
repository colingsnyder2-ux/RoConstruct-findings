// roc 2012-06 0095dba0  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095dba0
//
// 0095dba0  6840da9500           push 0x95da40
// 0095dba5  681470e500           push 0xe57014
// 0095dbaa  e8f139aaff           call 0x4015a0
// 0095dbaf  83c408               add esp, 8
// 0095dbb2  e9a9fdffff           jmp 0x95d960
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
