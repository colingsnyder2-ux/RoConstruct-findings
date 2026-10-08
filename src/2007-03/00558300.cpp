// roc 2007-03 00558300  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558300
//
// 00558300  6830c28b00           push 0x8bc230
// 00558305  68b05c5500           push 0x555cb0
// 0055830a  e841e51c00           call 0x726850
// 0055830f  83c408               add esp, 8
// 00558312  e9c9c3ffff           jmp 0x5546e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
