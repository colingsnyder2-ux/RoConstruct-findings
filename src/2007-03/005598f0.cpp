// roc 2007-03 005598f0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005598f0
//
// 005598f0  6864c28b00           push 0x8bc264
// 005598f5  68805d5500           push 0x555d80
// 005598fa  e851cf1c00           call 0x726850
// 005598ff  83c408               add esp, 8
// 00559902  e989b3ffff           jmp 0x554c90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
