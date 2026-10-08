// roc 2007-03 00559240  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00559240
//
// 00559240  6858c28b00           push 0x8bc258
// 00559245  68505d5500           push 0x555d50
// 0055924a  e801d61c00           call 0x726850
// 0055924f  83c408               add esp, 8
// 00559252  e9e9b8ffff           jmp 0x554b40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
