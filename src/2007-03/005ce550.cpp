// roc 2007-03 005ce550  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ce550
//
// 005ce550  689cc28b00           push 0x8bc29c
// 005ce555  68605e5500           push 0x555e60
// 005ce55a  e8f1821500           call 0x726850
// 005ce55f  83c408               add esp, 8
// 005ce562  e9496df8ff           jmp 0x5552b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
