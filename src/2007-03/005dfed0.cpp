// roc 2007-03 005dfed0  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dfed0
//
// 005dfed0  68cc078c00           push 0x8c07cc
// 005dfed5  68f0f05d00           push 0x5df0f0
// 005dfeda  e871691400           call 0x726850
// 005dfedf  83c408               add esp, 8
// 005dfee2  e929efffff           jmp 0x5dee10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
