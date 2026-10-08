// roc 2007-03 005597d0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005597d0
//
// 005597d0  6860c28b00           push 0x8bc260
// 005597d5  68705d5500           push 0x555d70
// 005597da  e871d01c00           call 0x726850
// 005597df  83c408               add esp, 8
// 005597e2  e939b4ffff           jmp 0x554c20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
