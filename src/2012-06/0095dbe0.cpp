// roc 2012-06 0095dbe0  unit: RBX::HUMAN::Landed  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095dbe0
//
// 0095dbe0  6850da9500           push 0x95da50
// 0095dbe5  681c70e500           push 0xe5701c
// 0095dbea  e8b139aaff           call 0x4015a0
// 0095dbef  83c408               add esp, 8
// 0095dbf2  e9d9fdffff           jmp 0x95d9d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
