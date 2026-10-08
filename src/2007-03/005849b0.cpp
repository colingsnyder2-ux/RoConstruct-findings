// roc 2007-03 005849b0  unit: seg_00580000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005849b0
//
// 005849b0  688c5e8b00           push 0x8b5e8c
// 005849b5  68f0964300           push 0x4396f0
// 005849ba  e8911e1a00           call 0x726850
// 005849bf  83c408               add esp, 8
// 005849c2  e93945ebff           jmp 0x438f00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
